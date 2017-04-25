#include<iostream>


int main() {
	using namespace std;
	 long double ad[101] = { 0 };
	ad[1] = ad[0] = 1l;
	for (int i = 2; i < 101; i++)
	{
		ad[i] = i*ad[i - 1];
	}
	for (int i = 0; i < 101; i++)
	{
		cout << i << "!" << ad[i] << endl;
	}
	return 0;
}
