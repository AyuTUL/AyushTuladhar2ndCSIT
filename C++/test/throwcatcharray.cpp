#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num[]={1,2,4,8,16,32,64,128,156};
	int den[]={1,0,2,0,4,0,8},i,r;
	for(i=0;i<9;i++)
	{
		try
		{
			if(i>=7)
				throw 'E';
			else if(den[i]==0)
				throw den[i];
			else
			{
				r=num[i]/den[i];
				cout<<num[i]<<"/"<<den[i]<<" = "<<r<<endl;
			}
		}
		catch(int exp)
		{
			cout<<"Can't divide by zero"<<endl;
		}
		catch(char E)
		{
			cout<<"No matching denominator "<<endl;
		}
		getch();
	}
	cout<<"End of program";
	return 0;
}