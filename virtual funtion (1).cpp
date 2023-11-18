#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void print()
		{
			cout<<"Print the Base class \n";
		}
		void show()
		{
			cout<<"Show the Base class \n";
		}
	};
	
	class Derieved:public Base
	{
		public:
			void print()
			{
				cout<<"Print the Derieved class \n";
			}
			void show()
			{
				cout<<"Show the Derieved class \n";
			}
	};
	
	int main()
	{
		Base*bptr;
		Derieved d;
		bptr=&d;
		//virtual funtion,binding at run-time
		bptr->print();
		//non-virtual function,binding at compile-time
		bptr->show();
	}
	
