//forstr1 - - using for with a string
#include<iostream>
#include<string>
int main() {
	using namespace std;
	cout << "Enter the word: ";
	string word;
	cin >> word;
	
	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\n Bye \n";
	return 0;
}