#include<iostream>
using namespace std;
class Base
{
	public:
		void show()
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
		void display()
		{
			cout<<"Derived display"<<endl;
		}
};
int main()
{
	Base b;
	Derived d;
	cout<<"Calling base functions :"<<endl;
	b.show();
	b.display();
	cout<<"Calling derived functions : "<<endl;
	d.show();
	d.display();
	cout<<"Calling base function through derived object : "<<endl;
	d.Base::show();
	d.Base::display();
	return 0;
}

