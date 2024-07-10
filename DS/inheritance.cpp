#include<iostream>
using namespace std;
class Employee
{
	public:
		int eid;
		char name[20], address[20];
		void read(){
			cout<<"Enter eid, name & address: ";
			cin>>eid>>name>>address;
		}
		void display()
		{
			cout<<"Eid: "<<eid<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
		}
};
class Manager:public Employee
{
	private:
		char qual[20],type[20];
		int exp;
	public:
		void read()
		{
			Employee::read();
			cout<<"Enter experience year: ";
			cin>>exp;
			cout<<"Enter qualification: ";
			cin>>qual;
			cout<<"Enter manager type: ";
			cin>>type;
		}
		void display()
		{
			Employee::display();
			cout<<"Expeience: "<<exp<<" years"<<endl;
			cout<<"Qualification: "<<qual<<endl;
			cout<<"Manager type: "<<type<<endl;
		}
};
int main()
{
	Manager m;
	m.read();
	m.display();
	return 0;
}