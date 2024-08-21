#include<iostream>
using namespace std;
int prod(int x,int y)
{
	if(x==0 || y==0)
		return 0;
	if(x<0 && y<0)
		return(prod(-x,-y));
	if(x<0)
		return(-prod(-x,y));
	if(y<0)
		return(-prod(x,-y));
	return(x+prod(x,y-1));
}
int main()
{
	int a,b;
	cout<<"Enter 2 integers : ";
	cin>>a>>b;
	cout<<"Product of "<<a<<" & "<<b<<" = "<<prod(a,b);
	return 0;
}
