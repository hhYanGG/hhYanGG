//for循环 求两数之间所有整数的和
#include<iostream>
int main() {
	using namespace std;
	int i, j,sum=0;
	cout << "请输入较小的整数" ;
	cin >> i;
	cout << "请输入较大的整数";
	cin >>j;

	for (int k = i; k <= j;k++) {
		sum += k;
	}
	cout << sum;
	return 0;
}
