#include "stdafx.h"
#include "Queue.h"


Customer::Customer()
{
	arrive = processTime = 0;
}


void Customer::set(long when)
{
	processTime = std::rand() % 3 + 1;
	arrive = when;
}

Customer::~Customer()
{
}
