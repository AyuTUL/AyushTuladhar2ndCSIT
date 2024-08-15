#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 2 integers : ";
	cin>>a>>b;
	try
	{
		if(b==0)
			throw b;
		c=a/b;
		cout<<a<<" / "<<b<<" = "<<c<<endl;
	}
	catch(int exp)
	{
		cout<<"Divide by "<<exp<<" exception occured"<<endl;
	}
	cout<<"End of program";
	return 0;
}