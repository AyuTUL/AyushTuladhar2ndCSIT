#include<iostream>
using namespace std;
class Employee
{
	public:
		int eid,salary;
		string name;
		void read()
		{
			cout<<"Enter eid, name & salary : "<<endl;
			cin>>eid>>name>>salary;
		}
		void display()
		{
			cout<<"Eid : "<<eid<<endl<<"Name : "<<name<<endl<<"Salary : "<<salary<<endl;
		}
};
class Manager:public Employee
{
	private:
		string quali;
		int expyear;
	public:
		void read()
		{
			Employee::read();
			cout<<"Enter qualification & years of experience : ";
			cin>>quali>>expyear;
		}
		void display()
		{
			Employee::display();
			cout<<"Qualification : "<<quali<<endl<<"Years of Experience : "<<expyear<<endl;
		}
};
int main()
{
	Manager m;
	m.read();
	m.display();
	return 0;
}