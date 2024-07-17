#include<iostream>
using namespace std;
class Person
{
	private:
		int age;
		string name,address;
	public:
		void show()
		{
			cout<<endl<<"Name : "<<name<<endl<<"Address : "<<address<<endl<<"Age : "<<age<<endl;
		}
		void read()
		{
			cout<<"Enter name, address & age : "<<endl;
			cin>>name>>address>>age;
		}
};
class Employee:public Person
{
	private:
		int eid,salary;
	public:
		void show()
		{
			Person::show();
			cout<<"Eid : "<<eid<<endl<<"Salary : "<<salary<<endl;
		}
		void read()
		{
			Person::read();
			cout<<"Enter eid & salary : "<<endl;
			cin>>eid>>salary;
		}
};
class Manager:public Employee
{
	private:
		int no_of_pro;
	public:
		void show()
		{
			Employee::show();
			cout<<"No. of Projects : "<<no_of_pro<<endl;
		}
		void read()
		{
			Employee::read();
			cout<<"Enter no. of projects : ";
			cin>>no_of_pro;
		}
};
class Scientist:public Employee
{
	private:
		int no_of_pub;
	public:
		void show()
		{
			Employee::show();
			cout<<"No. of Publications : "<<no_of_pub<<endl;
		}
		void read()
		{
			Employee::read();
			cout<<"Enter no. of publications : ";
			cin>>no_of_pub;
		}
};
int main()
{
	Manager m;
	m.read();
	m.show();
	Scientist s;
	s.read();
	s.show();
	return 0;
}