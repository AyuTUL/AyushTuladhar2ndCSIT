#include<iostream>
using namespace std;
int extendedGCD(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return(a);
	}
	int x1,y1;
	int gcd=extendedGCD(b,a%b,x1,y1);
	x=y1;
	y=x1-(a/b)*y1;
	return(gcd);
}
int main()
{
	int a,b,x,y;
	cout<<"Enter 2 integers : ";
	cin>>a>>b;
	cout<<"Using Extended Euclidean Algorithm :"<<endl;
	cout<<"gcd ( "<<a<<" , "<<b<<" ) = "<<extendedGCD(a,b,x,y)<<endl;
	cout<<"Coefficients :"<<endl;
	cout<<"x = "<<x<<" & y = "<<y;
	return 0;
}
