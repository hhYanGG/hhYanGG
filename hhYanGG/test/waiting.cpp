//waiting.cpp using clock() in a time-delay loop
#include<iostream>
#include<ctime>
int main() {
	using namespace std;
	cout << "Enter the delay time in seconds";
	float secs;
	cin >> secs;
	clock_t delay = secs *CLOCKS_PRE_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";
	return 0;
}
