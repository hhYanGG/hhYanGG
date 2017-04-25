//ex-4.1
#include<iostream>
const int size = 20;
using namespace std;
struct student{
	char firstname[size];
	char lastname[size];
	char grade;
    int age;
};
void display(student);
int main() {
	cout << "输入你的firstname";
	student st1;
	cin.getline(st1.firstname,size);
	cout << "输入你的lastname";
	cin.getline(st1.lastname,size);
	cout << "\n输入你的成绩";
	cin >> st1.grade;
	cout << "\n输入你的年龄";
	cin >> st1.age;
	display(st1);
	return 0;
}
void display(student st1) {
	cout << "Name: " << st1.firstname << "," << st1.lastname << endl;
	cout << "Grade" << st1.grade << endl;
	cout << "Age" << st1.age << endl;
}
