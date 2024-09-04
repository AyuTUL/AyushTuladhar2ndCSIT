#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"Base show"<<endl;
		}
		void display()
		{
			cout<<"Base display"<<endl;
		}
};
class Derived: public Base
{
	public:
		void show()
		{
			cout<<"Derived show"<<endl;
		}
		void display()
		{
			cout<<"Derived display"<<endl;
		}
};
int main()
{
	Base b,*p;
	Derived d;
	p=&b;
	cout<<"Pointer is pointing to Base object :"<<endl;
	p->show();
	p->display();
	p=&d;
	cout<<"Pointer is pointing to Derived object :"<<endl;
	p->show();
	p->display();
	return 0;
}

