//exm3_7.3
#include<iostream>
int main() {
	using namespace std;
	const int ex = 60;
	double degree,degree_aft,minute,second;
	cout << "Enter a latitude in degree minutes,and seconds" << endl;
	cout << "First enter the degrees";
	cin >> degree;
	cout << endl << "Enter the minutes of arc:";
	cin >> minute;
	cout << endl << "Enter the seconds of arc :";
	cin >> second;
	degree_aft = degree + (minute / ex) + second / (ex*ex);
	cout << degree << "degree " << minute << " minutes" << second << " second = " << degree_aft << " degrees";
	return 0;


}