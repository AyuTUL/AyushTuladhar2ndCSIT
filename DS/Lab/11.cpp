#include<iostream>
using namespace std;
long int fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*fact(n-1));
}
long int permu(int n,int r)
{
	return(fact(n)/(fact(n-r)));
}
int main()
{
	int n,r;
	cout<<"Enter values of n & r : ";
	cin>>n>>r;
	if(r>n || n<0 || r<0)
		cout<<"C ( "<<n<<" , "<<r<<" ) is invalid as 0 <= r <= n should be satisfied.";
	else
		cout<<"C ( "<<n<<" , "<<r<<" ) = "<<permu(n,r);
	return 0;
}
