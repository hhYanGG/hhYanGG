//fish struct of fish
#include<iostream>
#include<vector>
struct fish
{
	char kind[20];
	int weight;
	float length;
};
fish f1{
	"maha",
	19,
	12.3,
}; 
int main() {
	using namespace std;
	cout << f1.kind << "\n" << f1.weight << "\n" << f1.length<<endl;
	enum Response
	{
		No, Yes, Maybe
	};
	
	double ted = 3.1415926;
	double  *pd = &ted;
	cout << pd<<endl;

	float treacle[10] = {1.444, 2.443, 3.556};
	float *pt = &treacle[0];
	cout << *pt;

	unsigned int size;
	cout << "输入一个正整数";
	cin >> size;
	int * dyn = new int[size];
	vector<int> dv(size);
	

}
