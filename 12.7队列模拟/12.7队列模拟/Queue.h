#pragma once
class Queue
{
	enum 
	{Q_SIZE = 10};
private:
//class scope definitions
	//Node is a nested structure defunition local to this class
	struct Node
	{
		Item item;
		struct Node *next;
	};
	Node *front;
	Node *rear;
	int items;
	const int qsize;
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &item);//add item to end
	bool dequeue(Item &item);//remove item from front
};

