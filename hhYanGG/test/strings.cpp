//strings.cpp - - storing string in an array
#include<iostream>
#include<cstring>;
int main() {
	using namespace std;
	const int Size = 15;
	char name1[Size];				//empty array
	char name2[Size] = "C++owboy"; //initialized arrey
	//NOTE some implementations may require the static keyword
	//to initialize the array name2

	cout << "Howdy! I'm" << name2;
	cout << "what's your name\n";
	cin >> name1;
	cout << "well, " << name1 << " you name has ";
	cout << strlen(name1) << " letters and stored\n";
	cout << "in a array of" << sizeof(name1) << "byte\n";
	cout << "Your initial is" << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "here are the first 3 characters of my name";
	cout << name2 << endl;
	return 0;

}
