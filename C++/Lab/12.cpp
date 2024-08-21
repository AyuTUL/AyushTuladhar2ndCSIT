#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
	return(a+b+c);
}
int avg(int a,int b,int c)
{
	return(a+b+c)/3;
}
int large(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
int small(int a,int b,int c)
{
	if(a<b && a<c)
		return a;
	else if(b<c)
		return b;
	else
		return c;
}
int main()
{
	int a,b,c;
	cout<<"Enter 3 integers : ";
	cin>>a>>b>>c;
	cout<<"Sum of "<<a<<" , "<<b<<" , "<<c<<" = "<<sum(a,b,c)<<endl;
	cout<<"Average of "<<a<<" , "<<b<<" , "<<c<<" = "<<avg(a,b,c)<<endl;
	cout<<"Largest among "<<a<<" , "<<b<<" , "<<c<<" = "<<large(a,b,c)<<endl;
	cout<<"Smallest among "<<a<<" , "<<b<<" , "<<c<<" = "<<small(a,b,c);
	return 0;
}
