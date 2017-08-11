#include "stdafx.h"
#include "Brass.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const std::string & s, long an, double bal)
{
	fullname = s;
	acctNum = an;
	balance = bal;
}

void Brass::Desposit(double amt)
{
	if (amt < 0)
		cout << "Negative depost not allowed";
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	//set up ##,## format
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
		cout << "Withdraw amount must be positive:"
		<< "withdraw canceled.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Withdrawal amount of $" << amt
		<< "exceeds your balance.\n";
	restore(initialState, prec);


}

double Brass::Balance() const
{
	return balance;
}

void Brass::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "Client: " << fullname << endl;
	cout << "Account number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	restore(initialState, prec);
}

BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r): Brass(s,an,bal)
{
	maxLoan = ml;
	ownsBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r): Brass (ba)
{
	maxLoan = ml;
	ownsBank = 0.0;
	rate = r;
}
//redifine how ViewAcct()works
void BrassPlus::ViewAcct() const
{
	//set up ##.## format
	format initiaState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();
	cout << "Maximum loan $ " << maxLoan << endl;
	cout << "Owed to bank $ " << ownsBank << endl;
	cout.precision(3);
	cout << "Loan Rate :" << 100 * rate << "%\n";
	restore(initiaState, prec);
}
// redefine how With draw() works
void BrassPlus::Withdraw(double amt)
{
	format initiaState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt < +bal + maxLoan - ownsBank)
	{
		double advance = amt - bal;
		ownsBank += advance * (1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finace charge: $" << advance * rate << endl;
		Desposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "Credit limit exceeded Transaction cancelled.\n";
	restore(initiaState, prec);
}
format setFormat()
{
	//set up ##.## format
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}
