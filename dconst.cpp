// C++ program to illustrate
// strcpy() function in C/C++
#include <iostream>

using namespace std;
class student 
{

int id;
public:
	void techno(int x)
	{
		id=x;
	}
	void display()
	{
		cout<<"ID:"<<id<<endl;
	}
};

int main()
{
	student Btech;
	Btech.techno(20);
	Btech.display();
	student CSE(Btech);
	CSE.display();
	return 0;
}
