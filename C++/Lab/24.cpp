#include<iostream>
#include<string.h>
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
		String join(String s)
		{
			String temp;
			temp.length=length+s.length;
			temp.name=new char(temp.length+2);
			strcpy(temp.name,name);
			strcat(temp.name," ");
			strcat(temp.name,s.name);
			return(temp);
		}
		void display()
		{
			cout<<name<<endl;
		}
};
int main()
{
	String s1("Heung-Min");
	String s2("Son");
	String s3=s1.join(s2);
	s1.display();
	s2.display();
	cout<<"Concatenated String :"<<endl;
	s3.display();
	return 0;
}
