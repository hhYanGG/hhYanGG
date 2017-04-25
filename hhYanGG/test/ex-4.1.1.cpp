#include<iostream>
int main() {
	using namespace std;
	const int Size = 3;
	int success[Size];
	cout << "Enter you time running:\n";
	cin >> success[0]>> success[1] >> success[2];
	cout << success[0] << endl;
	cout << success[1] << endl;
	cout << success[2] << endl;
	double avg = (success[0] + success[1] + success[2]) / Size;
	cout << avg;
	return 0;
}
