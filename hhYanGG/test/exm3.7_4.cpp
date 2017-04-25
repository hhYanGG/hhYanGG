//exm3.7_4.cpp
#include<iostream>
int main() {
	using namespace std;
	int days, hours,minute, seconds;
	long long seconds_before,seconds_before_2;
	const int ex = 60,ex_2 = 24;
	cout << "输入秒数_____" << endl;
	cin << seconds_before;
	days = seconds_before / （ex*ex*ex_2);
	seconds_before = seconds_before % (ex*ex*ex_2);

	hours = seconds_before / (ex*ex);
	seconds_before = seconds_before % (ex*ex);

	minute = seconds_before / ex;
	seconds_before = seconds_before%ex;

	seconds = seconds_before;

	cout << seconds_before_2 << "秒 =" << days << " 天 " << hours << " 时 " << minute << " 分 " << seconds << " 秒 ";
	return 0;

}
