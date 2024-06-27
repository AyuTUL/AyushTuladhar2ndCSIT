#include<iostream>
#include<string.h>
using namespace std;
class Str
{
	private:
		int len;
		char *name;
	public:
		Str()
		{
			len=2;
			name=new char(len);
			strcpy(name," ");
		}
		Str(char *n)
		{
			len=strlen(n);
			name=new char(len+1);
			strcpy(name,n);
		}
		void display()
		{
			cout<<name<<endl;
		}
		Str join(Str S)
		{
			Str temp;
			temp.len=len+S.len;
			temp.name=new char(temp.len+2);
			strcpy(temp.name,name);
			strcat(temp.name," ");
			strcat(temp.name,S.name);
			return temp;
		}
};
int main()
{
	Str s1("Object Oriented");
	Str s2("Programming");
	Str s3;
	s3=s1.join(s2);
	s3.display();
}