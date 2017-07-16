// stone.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stonewt.h"
#include <iostream>

void display(const Stonewt & st, int n);


int main()
{

	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "Convert to double => ";
	cout << "Poppins " << p_wt << " pounds.\n ";
	cout << "Convert to int => ";
	cout << "Poppins " << int(poppins) << " pounds.\n";
    return 0;
}

