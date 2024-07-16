//Lab 7: Implementation of Sum upto nth Natural Number using Recursive Algorithm
#include<iostream>
using namespace std;
long sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);    
}
int main()
{
	long n,result;
	cout<<"Enter a natural number : ";
	cin>>n;
	if(n<=0)
	{
		cout<<"Invalid input. Please enter a natural number.";
		return 0;
	}
	result = sum(n);
	cout<<"Sum of Natural Numbers upto "<<n<<" = "<<result;
    return 0;
}