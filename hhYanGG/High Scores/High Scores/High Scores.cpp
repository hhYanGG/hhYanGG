// High Scores.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
int main()
{	
	vector<int>::const_iterator iter;
	cout << "创建分数列表";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	cout << "\n 最高得分 ";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\n 查询得分";
	int score;
	cout << "\n 输入你想查询的分数";
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

