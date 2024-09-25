#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter an integer : ";
	cin>>n;
	if(n<=1)
		cout<<n<<" is neither prime nor composite";
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
				break;
		}
		if(i>n/2)
			cout<<n<<" is prime";
		else
			cout<<n<<" is composite";
	}
	return 0;
}
