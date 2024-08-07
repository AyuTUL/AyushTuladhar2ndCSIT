//roots of quadratic using template
#include<iostream>
#include<math.h>
using namespace std;
template<class T>
void roots(T a,T b,T c)
{
	T d,r1,r2;
	d=b*b-4*a*c;
	if(d<0)
	{
		cout<<"No real roots";
	}
	else
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		cout<<"Root 1 = "<<r1<<endl;
		cout<<"Root 2 = "<<r2;
	}
}
int main()
{
	double a,b,c;
	cout<<"Enter the coefficients of quadratic equation : ";
	cin>>a>>b>>c;
	roots(a,b,c);
	int a1,b1,c1;
	cout<<endl<<"Enter the coefficients of quadratic equation : ";
	cin>>a1>>b1>>c1;
	roots(a1,b1,c1);
	return 0;
}