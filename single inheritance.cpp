#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:
	int rollno;
	char name[20];
	public:
	
	void getdata()
	{ 
	cout<<"Enter roll no"<<endl;
	cin>>rollno;
	cout<<"Enter name"<<endl;
	cin>>name;
	}
	
	void display()
	{
		cout<<"Roll No"<<rollno<<endl;
		cout<<"Name:"<<name<<endl;
	}
};

class B: public A
{
	private:
		float height, weight;
		public:
			void getdata()
			{
				cout<<"Enter Height"<<endl;
				cin>>height;
				cout<<"Enter Weight"<<endl;
				cin>>weight;
			}
			
			void display()
			{
				cout<<"Height:"<<height<<endl;
				cout<<"Weight:"<<weight<<endl;
			}
};

int main()
{
	B ob1;
	
	ob1.A::getdata();
	ob1.getdata();
	
	ob1.A::display();
	ob1.display();
}
