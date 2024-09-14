#include<iostream>
using namespace std;
double power(double m,int n=2)
{
	double sum=1;
	int i;
	if(n>0)
		for(i=0;i<n;i++)
			sum*=m;
	else
		for(i=0;i<-n;i++)
			sum*=(1/m);
	return(sum);
}
int main()
{
	double m;
	int n;
	cout<<"Enter base & power : ";
	cin>>m>>n;
	cout<<m<<" raised to the power "<<n<<" = "<<power(m,n)<<endl;
	cout<<"Enter base : ";
	cin>>m;
	cout<<m<<" raised to the power 2 = "<<power(m)<<endl;
	return 0;
}
