#include<iostream>
int main() {
	using namespace std;
	cout << "������һ����";
	int sum = 0, num;
	while (cin>>num&&num!=0)
	{
		sum += num;
		cout << "�ܺ�Ϊ" << sum << endl;
		cout << "������һ����";
		 
	}
	return 0;
}
