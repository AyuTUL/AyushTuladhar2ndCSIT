#include<iostream>
using namespace std;
class Employee
{
	private:
		char name[50];
		long id;
	public:
		void getread()
		{
			cout<<"Enter id of employee: ";
			cin>>id;
			cout<<endl<<"Enter name of employee: ";
			cin>>name;
		}
		void putdata()
		{
			cout<<"eid: "<<id<<" "<<name;
		}
};
int main()
{
	Employee e1[100];
	int i;
	for( i=1;i<=3;i++)
	{
		e1[i].getread();
	}
	for( i=1;i<=3;i++)
	{
		e1[i].putdata();
	}
}