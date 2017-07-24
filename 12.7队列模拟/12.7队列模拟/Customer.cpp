#include "stdafx.h"
#include "Queue.h"


Customer::Customer()
{
}


void Customer::set(long when)
{
	processTime = std::rand() % 3 + 1;
	arrive = when;
}

Customer::~Customer()
{
}
