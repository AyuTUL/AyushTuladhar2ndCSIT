//Lab 6: Implementation of Factorial using Recursive Algorithm
#include<iostream>
using namespace std;
long fact(int);
int main()
{
	int n;
	cout<<"Enter an integer : ";
	cin>>n;
	if(n<0)
	{
		cout<<"Factorial of negative integer doesn't exist.";
		return 0;
	}
	cout<<"Factorial of "<<n<<" = "<<fact(n);
	return 0;
	
}
long fact(int n)
{
	if(n==0)
		return 0;
	else if(n==1 || n==2)
		return n;
	else
		return n*fact(n-1);
}