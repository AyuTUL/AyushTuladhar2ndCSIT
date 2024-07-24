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
class Derived:public Base
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
	Base obj1;
	Derived obj2;
	Base *p=&obj1;
	cout<<"Pointer is pointer to base object"<<endl;
	p->show();
	p->display();
	p=&obj2;
	cout<<"Pointer is pointing to derived object"<<endl;
	p->show();
	p->display();
	return 0;
}