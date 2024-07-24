#include<iostream>
using namespace std;
class Base
{
	public:
		int a;
		void show()
		{
			cout<<"Base show"<<endl;
			cout<<"a = "<<a<<endl;
		}
};
class Derived:public Base
{
	public:
		int d;
		void display()
		{
			cout<<"Display derived"<<endl;
			cout<<"a = "<<a<<endl;
			cout<<"d = "<<d<<endl;
		}
};
int main()
{
	Base obj1;
	obj1.a=10;
	Derived obj2;
	obj2.a=20;
	obj2.d=40;
	Base *p=&obj1;
	cout<<"Pointer is pointer to base object"<<endl;
	p->show();
	p=&obj2;
	cout<<"Pointer is pointing to derived object"<<endl;
	p->show();
	//p->display();
	obj2.display();
	return 0;
}