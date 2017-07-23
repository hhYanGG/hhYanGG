#pragma once
class Queue
{
	enum 
	{Q_SIZE = 10};
private:
//private representation to be developed later
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &item);
	bool dequeue(Item &item);
};

