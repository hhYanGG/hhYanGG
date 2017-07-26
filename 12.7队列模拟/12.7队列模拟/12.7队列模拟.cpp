// 12.7队列模拟.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
//setting things up
	std::srand(std::time(0)); // random intializing of rand()

	cout << "Case Study: bank of Heather automatic Teller\n";
	cout << "Enter maxmum size of queue:";
	int qs;
	cin >> qs;
	Queue line(qs); //line queue holds up to qs people

	cout << "Enter the number of simulation hours:";
	int hours;
	cin >> hours;
	//simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;  //# of cycles
	cout << "Enter the average number of customer per hour:";
	double perhour;
	cin >> perhour;
	double min_per_cust;  //average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;				//new customer data
	long turnaways = 0;		//turned away by full queuq
	long customers = 0;		//joined the queue
	long served = 0;		//served during the simulation
	long sum_line = 0;		//cumulative line lenfth
	int wait_time = 0;		//time until autoteller isfree
	long line_wait = 0;		//cumulative time in line
	//running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time > 0)
		{
			wait_time--;
		}
		sum_line += line.queuecount();
	}
	//reporting result
	if (customers > 0)
	{
		cout << "customer accepted: " << customers << endl;
		cout << "customer served: " << served << endl;
		cout << "		turnaway: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "average wait time: "
			<< (double)line_wait / served << "minutes\n";
	}
	else
	{
		cout << "No customers\n";
	}
	cout << "Done!\n";
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
