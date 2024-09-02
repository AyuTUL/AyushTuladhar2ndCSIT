#include<iostream>
using namespace std;
class Teacher
{
	public:
		int tid;
		string subject;
		void read()
		{
			cout<<"Enter teacher ID & subject  : ";
			cin>>tid>>subject;
		}
		void display()
		{
			cout<<"TID : "<<tid<<endl<<"Subject : "<<subject<<endl;
		}
};
class Staff
{
	public:
		int sid;
		string position;
		void read()
		{
			cout<<"Enter staff ID & positon  : ";
			cin>>sid>>position;
		}
		void display()
		{
			cout<<"SID : "<<sid<<endl<<"Position : "<<position<<endl;
		}
};
class Coordinator: public Teacher, public Staff
{
	private:
		string department;
	public:
		void read()
		{
			cout<<"Enter department : ";
			cin>>department;
		}
		void display()
		{
			cout<<"Department : "<<department<<endl;
		}
};
int main()
{
	Coordinator c1,c2;
	cout<<"Enter details of Teacher Coordinator :"<<endl;
	c1.Teacher::read();
	c1.read();
	cout<<endl<<"Enter details of Staff Coordinator :"<<endl;
	c2.Staff::read();
	c2.read();
	cout<<endl<<"Details of Teacher Coordinator :"<<endl;
	c1.Teacher::display();
	c1.display();
	cout<<endl<<"Details of Staff Coordinator :"<<endl;
	c2.Staff::display();
	c2.display();
}
