//compstr1.cpp -- comparing string using arrays
#include<iostream>
#include<cstring>
int main() {
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; ch < 'z'; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends , word is" << word << endl;
	return 0;
}