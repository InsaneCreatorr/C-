#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[50];
	double fee;
	public:

student()
{
	cout<<"Enter the roll no:"<<endl;
	cin>>roll_no;
	
	cout<<"Enter the name:"<<endl;
	cin>>name;
	
	cout<<"Enter fee:"<<endl;
	cin>>fee;
	
}

void display()
{
	cout<< roll_no<<"\t"<<name<<"\t"<<fee;
}
};

int main()
{
	student s;
	s.display();
	return 0;

}
