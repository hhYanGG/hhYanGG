// Tic-Tac-Toe Board.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
int main()
{
	const int ROWS = 3;
	const int COLUMES = 3;
	char board[ROWS][COLUMES]
	{
		{'O','X','O'},
		{' ','X','X'},
		{'X','O','O'}
	};
	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; ++ i)
	{
		for(int j = 0;j < COLUMES;++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "move 'X' to the empty location \n \n ";
	board[1][0] = 'X';
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMES; ++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n X win";
    return 0;
}

