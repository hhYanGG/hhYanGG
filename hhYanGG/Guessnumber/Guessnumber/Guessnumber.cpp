// Guessnumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
int main()
{	
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "欢迎来到猜数字游戏";
	do
	{
		cout << " 输入你猜测的数字 ";
		cin >> guess;
		tries++;
		if (guess > secretNumber)
			cout << " 太大了 \n \n";
		else if (guess < secretNumber)
			cout << " 太小了\n \n ";
		else
			cout << "你猜中了  你一共尝试了" << tries << " 次 ";
	} while (guess != secretNumber);
    return 0;
}

