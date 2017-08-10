#pragma once
#ifndef BARSS_H_
#define BARSS_H_
#include <string>
class Brass
{
private:
	std::string fullname;
	long acctNum;
	double balance;
public:
	Brass(const std::string & s = "Nullbody", long an = -1,
							double bal = 0.0);
	void Desposit(double amt);
	virtual void Withdraw(double amt);
	double Balance()const;
	virtual void ViewAcct()const;
	virtual ~Brass() {};
};
//Brass plus Account Class
class BrassPlus :public Brass
{
private:
	double maxLoan;
	double rate;
	double ownsBank;
public:
	BrassPlus(const std::string & s = "Nullbody", long an = -1,
		double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.111125);
	virtual void ViewAcct()const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { ownsBank = 0; 
	}
};

#endif // !BARSS_H_


