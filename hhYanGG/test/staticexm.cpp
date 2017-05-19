//static.cpp -- using a static local variable
#include<iostream>
//constants
const int ArsSize = 10;
//function prototype
void strcount(const char * str);
int main() {
	using namespace std;
	char input[ArsSize];
	char next;

	cout << "Enter a line:\n";
	cin.get(input, ArsSize);
	while (cin) {
		cin.get(next);
		while (next != '\n'){
			cin.get(next);
		}
		strcount(input);
		cout << "Enter next line (empty line to quit)\n";
		cin.get(input, ArsSize);
	}
	cout << "Bye:\n";
	return 0;
}
void strcount(const char * str) {
	using namespace std;
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" countains";
	while (*str++){
		count++;
	}
	total += count;
	cout << count << "characters\n";
	cout << total << "characters total\n";
}