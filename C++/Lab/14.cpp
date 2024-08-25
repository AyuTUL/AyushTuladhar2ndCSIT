#include<iostream>
using namespace std;
double area(int b,int h)
{
	return(0.5*b*h);
}
double area(double r)
{
	return(3.141*r*r);
}
int main()
{
	int b,h;
	double r;
	cout<<"Enter radius of circle : ";
	cin>>r;
	cout<<"Area of circle with radius "<<r<<" = "<<area(r)<<endl;
	cout<<"Enter base and height of triangle : ";
	cin>>b>>h;
	cout<<"Area of triangle with base "<<b<<" & height "<<h<<" = "<<area(b,h);
	return 0;
}
