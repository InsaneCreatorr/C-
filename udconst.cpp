// C++ program to illustrate
// strcpy() function in C/C++
#include <iostream>

//User Defined Copy Constructor
using namespace std;
class student 
{

int id;
public:
	void techno(int x)
	{
		id=x;
	}
	student()  //Default constructor with empty body
	{
	}
	student(student&Snu)  //Default constructor with object(Snu)
	{
		id=Snu.id;
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
