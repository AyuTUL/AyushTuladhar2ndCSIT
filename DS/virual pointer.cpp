#include<iostream>
using namespace std;
class Base
{
	public:
		  virtual void show()
		{
			cout<<"Base show"<<endl;
		}
		virtual void display()
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
	Base *p;
	Derived obj2;
	p=&obj1;
	cout<<"Base pointer pointing to base object: "<<endl;
	p->show();
	p->display();
	cout<<"Base pointer pointing to derived object"<<endl;
	p=&obj2;
	p->show();
	p->display();
	return 0;
}