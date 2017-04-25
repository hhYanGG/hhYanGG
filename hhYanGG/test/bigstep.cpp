//bigstep.cpp - - count as directed
#include<iostream>
int main() {
	using namespace std;
	cout << "输入你的变化幅度值";
	int by;
	cin >> by;
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;
	}
	return 0;
}