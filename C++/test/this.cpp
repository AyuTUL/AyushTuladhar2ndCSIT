#include<iostream>
using namespace std;
class Person
{
	private:
		int age;
		string name;
	public:
		Person()
		{
			age=0;
			name=" ";
		}
		Person(int a,string n)
		{
			age=a;
			name=n;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<age<<endl;
		}
		Person getOlder(Person p2)
		{
			if(age>p2.age)
				return(*this);
			else
				return(p2);
		}
};
int main()
{
	Person p1(21,"Manish");
	Person p2(25,"Ganesh");
	Person p3;
	p3=p1.getOlder(p2);
	cout<<"Older Person Details :"<<endl;
	p3.display();
	return 0;
}