// Guessnumber.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;
int main()
{	
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "��ӭ������������Ϸ";
	do
	{
		cout << " ������²������ ";
		cin >> guess;
		tries++;
		if (guess > secretNumber)
			cout << " ̫���� \n \n";
		else if (guess < secretNumber)
			cout << " ̫С��\n \n ";
		else
			cout << "�������  ��һ��������" << tries << " �� ";
	} while (guess != secretNumber);
    return 0;
}

