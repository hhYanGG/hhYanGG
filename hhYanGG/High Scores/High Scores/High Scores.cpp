// High Scores.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;
int main()
{	
	vector<int>::const_iterator iter;
	cout << "���������б�";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	cout << "\n ��ߵ÷� ";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\n ��ѯ�÷�";
	int score;
	cout << "\n ���������ѯ�ķ���";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end()) {
		cout << "scor found.\n";
	}
	else
	{
		cout << "score not found ";
	}
	cout << "\nRandomizing scores";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());
	cout << "\n high score:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\n Sorting scores";
	sort(scores.begin(), scores.end());
	cout << "\n high scores ";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
    return 0;
}

