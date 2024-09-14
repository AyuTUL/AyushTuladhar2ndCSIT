#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"1. Integer\n2. Float\n3. Character\nChoose exception to throw : ";
	cin>>ch;
	try
	{
		switch(ch)
		{
			case 1:
				throw 404;
				break;
			case 2:
				throw(3.141);
				break;
			case 3:
				throw('!');
				break;
			default:
				throw("unknown");
		}		
	}
	catch(int e)
	{
		cout<<"Integer exception caught : "<<e<<endl;
	}
	catch(double e)
	{
		cout<<"Float exception caught : "<<e<<endl;
	}
	catch(char e)
	{
		cout<<"Character exception caught : "<<e<<endl;
	}
	catch(...)
	{
		cout<<"Unknown exception caught"<<endl;
	}
	return 0;
}
