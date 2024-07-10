#include<iostream>
using namespace std;
int mult(int,int);
int main()
{
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	cout<<a<<"x"<<b<<"="<<mult(a,b);
	return 0;
}
int mult (int a, int b)
{
	if(a==0 || b==0)
		return 0;
	else if(a==1)
		return b;
	else if(b<0)
		return -mult(a,-b);
	else return a+mult(a,b-1);
}