#include<iostream>
using namespace std;
int sum(int n)
{
	if(n>9)
		return(n%10+sum(n/10));
	else
		return n;
}
int main()
{
	int n;
	cout<<"Enter an integer : ";
	cin>>n;
	cout<<"Sum of digits of "<<n<<" = "<<sum(n);
	return 0;
}