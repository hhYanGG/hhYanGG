//lotto.cpp - - probability of winning
#include<iostream>
//Note :some implementations require double instead of long double
long double probability(unsigned number, unsigned picks);
int main() {
	using namespace std;
	double total, choices;
	cout << "Enter the total number of choices on the game card and\n the number of picks allowed:\n";
	while ((cin>>total>>choices)&&choices<=total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);
		cout << "of winning.\n";
		cout << "Next two number(q to quit):";
	}
	cout << "Bye";
}
//the following function calculates the probability of picking picks
//number correctly from number choices
long double probability(unsigned number, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for(n = number , p = picks;p > 0 ;n--,p--)
	{
		result = result * n / p;
	}
	return result;
}