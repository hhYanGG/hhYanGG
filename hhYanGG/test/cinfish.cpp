//cinfish.cpp - - non-numeric input terminates loop
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	//get date
	double fish[Max];
	cout << "please enter the weight of your fish.\n";
	cout << "Your enter up to"<<Max
		 << "fish <q to terminate>.\n";
	cout << "fish #1 : ";
	int i = 0;
	while(i < Max&&cin >> fish[i]){
		if(++i< Max){
			cout << "fish #" << i+1 <<": ";
		}
	}
	//calculate average
	double	total = 0.0;
	for (int j = 0; j < i; j++){
		total +=fish[j];
	}
	//report result 
	if(i == 0)
		cout << "no fish ";
	else
		cout << total/i << " = average weight of "<<i<<" fish \n";
	cout << "Done \n";
	return 0;
}
