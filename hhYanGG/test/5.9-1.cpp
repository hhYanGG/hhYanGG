//forѭ�� ������֮�����������ĺ�
#include<iostream>
int main() {
	using namespace std;
	int i, j,sum=0;
	cout << "�������С������" ;
	cin >> i;
	cout << "������ϴ������";
	cin >>j;

	for (int k = i; k <= j;k++) {
		sum += k;
	}
	cout << sum;
	return 0;
}
