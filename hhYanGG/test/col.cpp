#include<iostream>
int main(){
	using namespace std;
	int maxtemps[4][5]={
		{12,34,23,45,23},
		{47,27,48,92,23},
		{23,43,12,65,39},
		{12,34,25,73,97}
	
	};
	
	for(int row = 0; row < 4; row++){
		for(int col = 0; col< 5;++col){
			cout << maxtemps[row][col] <<"\t";
		}
		cout <<endl;
		
	}
} 
