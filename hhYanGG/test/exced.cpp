//exced.cpp --exceding some integer limits
#include <iostream>
#define ZERO 0		//make ZERO symbol for 0 value
#include <climits>	//define INT_MAX as larger int value
int main() {
	using namespace std;
	short sam = SHRT_MAX;		//initialize a variable to max value
	unsigned short sue = sam;	//okay if variable sam already defined

	cout << "Sam has" << sam << "dollars and Sue has" << sue;
	cout << "dollars deposited" << endl
		<< "Add $1 to eache account" << endl << "Now";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has" << sam << "dollars and Sue has" << sue;
	cout << "dollars deposited.\n Poor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has" << sam << " dollars and Sue has" << sue;
	cout << "dollars deposited" << endl;
	cout << "Take $1 from eache account" << endl << "Now";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has" << sam << "dollars and Sue has" << sue;
	cout << "dollars deposited" << endl << "Luck sue" << endl;
	return 0;
}
