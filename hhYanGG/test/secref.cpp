//secref.cpp - - defing and using a reference
#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int &rodent = rats;//rodent is a reference

	cout << "rats = " << rats;
	cout << ", rodent =" << rodent << endl;

	cout << "rats address = " << &rats;
	cout << ",rodent address = " << &rodent << endl;

	int bunnies = 50;
	rodent = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ",rats = " << rats;
	cout << ",rodent = " << rodent << endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodent address = " << &rodent << endl;
	return 0;
}