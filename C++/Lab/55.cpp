#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
class String
{
	private:
		char name[SIZE];
	public:
		void read()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
		void show()
		{
			cout<<name<<endl;
			cout<<"Address in memory = "<<this<<endl;
		}
		String operator =(String s)
		{
			strcpy(this->name,s.name);
			return(*this);
		}
};
int main()
{
	String s1,s2;
	s1.read();
	s1.show();
	s2=s1;
	cout<<"Copied string :"<<endl;
	s2.show();
	return 0;
}
