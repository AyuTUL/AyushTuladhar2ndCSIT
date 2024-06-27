//prime from 300 to 500
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"Prime numbers from 300 - 500 :"<<endl;
	for(i=300;i<=500;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				break;
		}
		if(j>i/2)
			cout<<i<<"\t";
	}
	return 0;
}