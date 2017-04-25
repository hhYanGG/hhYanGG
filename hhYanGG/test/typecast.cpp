//typecast.cpp - - forcing type change Ç¿ÖÆ×ª»»
#include <iostream>
int main() {
	using namespace std;
	int auks, bate, coots;
	
	//the following statement add the value as double.
	//then converts the result to int.
	auks = 19.99 + 11.99;

	//these statement add value as int.
	bate = (int)19.99 + (int)11.99;//old C syntax
	coots = int(19.99) + int(11.99);//new C++ syntax
	cout << "auks = " << auks << ",bate = " << bate;
	cout << ",coots = " << coots << endl;

	char ch = 'Z';
	cout << "the code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes,the code is ";
	cout << static_cast<int>(ch) << endl;
	return 0;
	
}
