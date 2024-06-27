//reverse number
#include<iostream>
using namespace std;
int main()
{
	int n,temp,r,rev=0;
	cout<<"Enter an integer : ";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	cout<<"Reverse of "<<temp<<" = "<<rev;
	return 0;
}