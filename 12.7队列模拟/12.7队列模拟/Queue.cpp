#include "stdafx.h"
#include "Queue.h"


Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
	
}

Queue::~Queue()
{
}

bool Queue::isfull() const
{
	return false;
}

int Queue::queuecount() const
{
	return 0;
}

bool Queue::enqueue(const Item & item)
{
	return false;
}

bool Queue::dequeue(Item & item)
{
	return false;
}
