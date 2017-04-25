//CandyBar.cpp ex-4-5
#include<iostream>
using namespace std;

struct CandyBar{
	char brand[20];
	double weight;
	int kalorie;
};
void display(CandyBar);
int main() {
	CandyBar snack = { "dove", 14.45, 2000 };
	CandyBar c1[3] = {
		{ "MochaMunch",2.3,350 },
		{ "XuFuJi",1.1,300 },
		{ "Alps",0.4,100 }
	};
	for (size_t i = 0; i < 3; i++) {
		cout << c1[i].brand<< endl;
		cout << c1[i].weight << endl;
		cout << c1[i].kalorie << endl;
	};

	
	
}
