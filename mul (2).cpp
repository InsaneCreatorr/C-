#include<iostream>
using namespace std;
class btech;
class cse
{
	int x;
	public:
		void set_data(int a)
		{
			x=a;
		}
		friend void max(cse,btech);
		
};
class btech
{
	int y;
	public:
		void set_data(int a)
		{
			y=a;
		}
		friend void max (cse,btech);
};

void max(cse t_1,btech t_2)
{
	if(t_1.x>t_2.y)
	{
		cout <<t_1.x;
	}
	else
	{
		cout<<t_2.y;
	}
	
}
int main()
{
	btech ct; //object
	cse os; //object
	
	ct.set_data(-100);
	os.set_data(50);
	
	max(os,ct);
	return 0;
}
