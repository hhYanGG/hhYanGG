// �򵥵Ļ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Tara", "Boomda", false);
	RatedPlayer rplayer(1140, "Mallory", "Duck", true);
	rplayer.Name();
	if (rplayer.HasTable())
		cout << ": has table\n";
	else
		cout << ": hasn't a table\n";
	player1.Name();
	if (player1.HasTable())
		cout << ": has table \n";
	else
		cout << ": hasn;t table \n";
	cout << "Name: ";
	rplayer.Name();
	cout << ": Rating" << rplayer.Rating() << endl;
    return 0;
}

