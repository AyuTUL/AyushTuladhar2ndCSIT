#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<" is: "<<fact(n);
	return 0;
	
}
int fact(int n)
{
	if(n==0)
		return 0;
	else if(n==1 || n==2)
		return n;
	else
		return n*fact(n-1);
}