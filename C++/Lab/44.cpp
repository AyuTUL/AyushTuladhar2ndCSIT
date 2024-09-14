#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
class String
{
	private:
		int len;
		char *str;
	public:
		String()
		{
			len=0;
			str=new char(len+1);
			str[0]='\0';
		}
		~String()
		{
			delete[] str;
		}
		void read(char *s)
		{
			len=strlen(s);
			str=new char(len+1);
			strcpy(str,s);
		}
		void display()
		{
			cout<<str<<endl;
		}
		friend String operator +(String &s1,String &s2);
};
String operator +(String &s1,String &s2)
{
	String temp;
	temp.len=s1.len+s2.len;
	temp.str=new char(temp.len+1);
	strcpy(temp.str,s1.str);
	strcat(temp.str,s2.str);
	return(temp);
}
int main()
{
	char st1[SIZE],st2[SIZE];
	String s1,s2,s3;
	cout<<"Enter 2 strings : "<<endl;
	cin>>st1>>st2;
	s1.read(st1);
	s2.read(st2);
	cout<<"Concatenated string : ";
	s3=s1+s2;
	s3.display();
	return 0;
}
