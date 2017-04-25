#include<iostream>

using namespace std;
int main() {
	char actor[30];
	short betsie[100];
	float chuck[13];

	/*array<char, 30> actor1;
	array<short, 100>betsie1;
	array<float, 13>chuck1;*/

	int ar1[5]={1, 3, 5, 7, 9};
	for(int i=0;i<=4;i++){
		cout<<ar1[i] <<endl;
	}
	int even = ar1[0] + ar1[4];
	cout << even << endl;
}


