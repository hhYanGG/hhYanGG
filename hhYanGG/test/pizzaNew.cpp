#include<iostream>
#include<string>
const int Size = 20;
struct pizza{
	char company[Size];
	double diameter;
	double weight;
};
int main() {
	using namespace std;
	pizza *pie = new pizza;
	cout << "What's the diameter of pizza";
	cin >> pie->diameter;
	cin.get();
	cout << "What's the name of pizza company";
	cin.get(pie->company, Size);
	cout << "What's the weight of pizza";
	cin >> pie->weight;
	cout << pie->company << endl;
	cout << pie->diameter << endl;
	cout << pie->weight << endl;
	delete pie;
	return 0;
}