//Lab 4: Implementation of Basic Euclidean Algorithm	
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    	return b;
    else
		return gcd(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter two integers : "<<endl;
    cin>>a>>b;
    if(a<0 || b<0)
    {
    	cout<<"GCD of negative integers doesn't exist.";
    	return 0;
	}
	else if(a==0 && b==0)
    {
    	cout<<"GCD of both 0 doesn't exist.";
    	return 0;
	}
	else
    	cout<<"GCD of "<<a<<" & "<<b<<" = "<<gcd(a,b);
    return 0;
}