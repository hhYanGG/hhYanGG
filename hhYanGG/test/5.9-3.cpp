#include<iostream>
int main() {
	using namespace std;
	double sum1=0, sum2=0;
	int year = 0;
	while (sum2 <= sum1) {
		++year;
		sum1 += 10;
		sum2 = (100 + sum2)*0.05 + sum2;
	}
	cout << year << "���cleo��Ͷ���ܳ���Daphne" << endl;
	cout << "��ʱsum1 =" << sum1 << "sum2 = " << sum2 << endl;
	return 0;
}