#include<iostream>
using namespace std;
void zeroSmaller(int *a,int *b)
{
	if(*a<*b)
		*a=0;
	else if(*b<*a)
		*b=0;
}
int main()
{
	int a,b;
	cout<<"Enter 2 integers : ";
	cin>>a>>b;
	zeroSmaller(&a,&b);
	cout<<"Setting smaller number to zero : "<<a<<" "<<b;
	return 0;
}
