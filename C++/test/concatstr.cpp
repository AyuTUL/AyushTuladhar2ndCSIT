#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		int len;
		char *s;
	public:
		String()
		{
			len=0;
			s=new char(len+1);
			strcpy(s," ");
		}
		String(char *n)
		{
			len=strlen(n);
			s=new char(len+1);
			strcpy(s,n);
		}
		void display()
		{
			cout<<s<<endl;
		}
		String operator +(String s2)
		{
			String temp;
			temp.len=len+s2.len;
			temp.s=new char(temp.len+2);
			strcpy(temp.s,s);
			strcat(temp.s," ");
			strcat(temp.s,s2.s);
			return(temp);
		}
};
int main()
{
	String s1("Good");
	String s2("Morning");
	String s3;
	s3=s1+s2;
	s3.display();
	return 0;
}