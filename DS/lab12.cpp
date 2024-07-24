//wrong showing all symmetric
//Lab 12: Implementation of Symmetric Relation
#include<iostream>
using namespace std;
struct pairSet
{
	int a,b;
}p[10];
int main()
{
	int i,j,flag=0,n;
	cout<<"Enter no. of ordered pairs : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter pair "<<i+1<<" : ";
		cin>>p[i].a>>p[i].b;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[j].a==p[j].b || (p[j].a==p[j+1].b && p[j].b==p[j+1].a))
			{
				flag++;
				break;
			}
		}
	}
	cout<<endl<<flag;
	if(flag==n)
		cout<<endl<<"Symmetric";
	else
		cout<<endl<<"Not Symmetric";
	return 0;
}