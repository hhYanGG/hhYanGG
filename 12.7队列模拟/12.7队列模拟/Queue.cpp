#include "stdafx.h"
#include "Queue.h"


Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
	
}

Queue::~Queue()
{
	Node *temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
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
	if (isfull())
		return false;
	Node *add = new Node;
	//on failure ,new throws std::bad_alloc exception
	add->item = item;
	add->next = NULL;
	items++;
	if (front = NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

bool Queue::dequeue(Item & item)
{
	if (front = NULL)
		return false;
	item = front->item;
	items--;
	Node *temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}
