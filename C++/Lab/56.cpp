#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
	cout<<"Enter dividend & divisor : ";
	cin>>a>>b;
	try
	{
		if(b==0)
			throw b;
		c=(float)a/b;
		cout<<a<<" / "<<b<<" = "<<c<<endl;
	}
	catch(int e)
	{
		cout<<"Error: Division by "<<e<<endl;
	}
	return 0;
}
