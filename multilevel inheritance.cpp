#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	public:
				
	char name[20];
	int rollno;
	
	void getdata()
	{ 
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter roll no"<<endl;
	cin>>rollno;
	}
	
	void display()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Roll No"<<rollno<<endl;
	}
};

class exam : public student
{
	public:
	int m1, m2 , m3, m4, m5;	
	void getdata()
	{
		cout<<"Enter your marks of subject 1: "<<endl;
		cin>>m1;
		cout<<"Enter your marks of subject 2: "<<endl;
		cin>>m2;
		cout<<"Enter your marks of subject 3: "<<endl;
		cin>>m3;
		cout<<"Enter your marks of subject 4: "<<endl;
		cin>>m4;
		cout<<"Enter your marks of subject 5: "<<endl;
		cin>>m5;
	}
	void display()
	{	
		cout<<"Marks for Subject 1 is: "<<m1<<endl;
		cout<<"Marks for Subject 2 is: "<<m2<<endl;
		cout<<"Marks for Subject 3 is: "<<m3<<endl;
		cout<<"Marks for Subject 4 is: "<<m4<<endl;
		cout<<"Marks for Subject 5 is: "<<m5<<endl;
	}
};

class result : public exam
{
	public:
	
	void display()
	{
		int avg=(m1+m2+m3+m4+m5)/5;
		cout<<"Average marks of student in 5 subjects:"<<avg<<endl;
	}
};

int main()
{
	result ob1;
	
	ob1.student::getdata();
	ob1.getdata();
	
	ob1.student::display();
	ob1.exam::display();
	ob1.display();	
	
}
