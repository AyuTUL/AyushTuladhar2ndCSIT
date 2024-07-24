#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the values of m & n : ";
	cin>>m>>n;
	if(m%n==0)
		cout<<m<<" is a multiple of "<<n;
	else
		cout<<m<<" is not a multiple of "<<n;
	return 0;
}