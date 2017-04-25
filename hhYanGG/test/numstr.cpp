//numstr.cpp - - following numbers input  whith line input
#include<iostream>
int main() {
	using namespace std;
	cout << "What your house bulit?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "what is street address£¿\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year bulit: " << year << endl;
	cout << "Address" << address << endl;
	cout << "Done\n";
	return 0;
}