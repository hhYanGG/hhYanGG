//jump.cpp using the continue and break
#include<iostream>
const int ArSize = 80;
int main() {
	using namespace std;
	char line[ArSize];
	int space = 0;

	cout << "Enter a line of text:\n";
	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << " Line through fitst period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] == ',')
			continue;
		space++;
	}
	cout << "\n" << space << "space\n";
	cout << "Done.\n";
	return 0;
}
