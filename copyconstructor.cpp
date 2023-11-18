#include<iostream>
#include<string.h>

//COPY CONSTRUCTOR
using namespace std;
class student
{
	int roll_no;
	char name[];
	double fee;
	public:
		student(int,char[],double);
		student(student&obj){
			roll_no=obj.roll_no;
			strcpy(name,obj.name);
			fee=obj.fee;
		}
		
		void display();
	};
		student::student(int no,char n[],double f){
			roll_no=no;
			strcpy(name,n);
			fee=f;
		}
		void student::display(){
			cout<<endl<<roll_no<<"\t"<<name<<"\t"<<fee;
		}
		int main(){
			student Btech(10,"ABC",1000);
			student CSE(Btech);
			CSE.display();
			return 0;
		}

