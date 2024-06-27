#include<string.h>
#include<iostream>
using namespace std;
class String
{
	private:
		int length;
		char *name;
	public:
		String()
		{
			length=1;
			name=new char(length);
			strcpy(name," ");
		}
		String(char *n)
		{
			length=strlen(n);
			name=new char(length+1);
			strcpy(name,n);
		}
		String join(String s2)
		{
			String temp;
			temp.length=length+s2.length;
			temp.name=new char(temp.length+2);
			strcpy(temp.name,name);
			strcat(temp.name," ");
			strcat(temp.name,s2.name);
			return temp;
		}
		void display()
		{
			cout<<name<<endl;
		}
};
int main()
{
	String s1("Object Oriented");
	String s2("Programming");
	String s3;
	s3=s1.join(s2);
	s3.display();
	return 0;
}
