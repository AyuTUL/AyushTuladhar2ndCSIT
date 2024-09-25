#include<iostream>
using namespace std;
long int fact(int a)
{
	if(a==0)
		return 1;
	else
		return(a*fact(a-1));
}
int main()
{
	int n;
	cout<<"Enter an integer : ";
	cin>>n;
	if(n<0)
		cout<<"Factorial of negative integers do not exist";
	else
		cout<<n<<"! = "<<fact(n);
	return 0;
}
