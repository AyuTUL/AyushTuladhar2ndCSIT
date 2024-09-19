#include<iostream>
using namespace std;
int sum(int a)
{
	if(a==1)
		return 1;
	else
		return(a+sum(a-1));
}
int main()
{
	int n;
	cout<<"Enter a natural number : ";
	cin>>n;
	if(n<1)
		cout<<n<<" is not a natural number";
	else
		cout<<"Sum of natural numbers upto "<<n<<" = "<<sum(n);
	return 0;
}
