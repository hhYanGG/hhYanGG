#include<iostream>
int main() {
	using namespace std;
	cout << "请输入一个数";
	int sum = 0, num;
	while (cin>>num&&num!=0)
	{
		sum += num;
		cout << "总和为" << sum << endl;
		cout << "请输入一个数";
		 
	}
	return 0;
}
