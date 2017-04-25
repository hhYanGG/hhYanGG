//use_new.cpp - - using the new operator
#include<iostream>
int main() {
	using namespace std;
	int nights = 1001;
	int * pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << " location" << &nights;

	cout << "int";
	cout << " value = " << *pt << " lovation = " << pt << endl;

	double * pd = new double;
	*pd = 10000001.0;

	cout << "double";
	cout << "value = " << *pd << " location = " << pd << endl;
	cout << "location of the pointer pd:" << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << "size of *pt = " << sizeof(*pt);
	cout << "size of pd = " << sizeof(pd);
	cout << "size of *pd = " << sizeof(*pd);
	return 0;
}