// address.cpp - - pointer addition
#include<iostream>;
int main() {
	using namespace std;
	double wages[3] = { 1000.0 , 2000.0 , 3000.0 };
	short stacks[3] = { 3 , 2 , 1 };

	//here are two ways to get the address of an array
	double * pw = wages;
	short * ps = &stacks[0];
	//whith array element
	cout << "pw = " << pw << "  *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer: \n";
	cout << "pw = " << pw << "  *pw = " << *pw << endl;
	cout << "pw = " << ps << "  *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the psinter \n";
	cout << "ps = " << ps << " *ps = " << *ps << endl;

	cout << "access two elements with pointer notation\n";
	cout << "stacks[0] = " << stacks[0]
		 << "stacks[1] = " << stacks[1] << endl;
	cout << "access two element with pointer notation \n";
	cout << "*stacks = " << *stacks
		 << "*(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array \n";
	cout << sizeof(stacks) << " = size of stacks array\n";
	return 0;
}
