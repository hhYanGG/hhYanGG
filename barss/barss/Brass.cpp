#include "stdafx.h"
#include "Brass.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setPormat();
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
	format initialState = setPormat();
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
	format initialState = setPormat();
	precis prec = cout.precision(2);

}

BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r)
{
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
{
}

void BrassPlus::ViewAcct() const
{
}

void BrassPlus::Withdraw(double amt)
{
}
