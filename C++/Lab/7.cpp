#include<iostream>
using namespace std;
double si(double p,double t,double r=7)
{
	return((p*t*r)/100);
}
int main()
{
	double p,t;
	cout<<"Enter principal & time : ";
	cin>>p>>t;
	cout<<endl<<"Simple Interest = "<<si(p,t);
	return 0;
}
