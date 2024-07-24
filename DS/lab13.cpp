//Lab 13: Implementation of Partially Ordered Pair(Poset)
#include<iostream>
using namespace std;
struct orderedPair
{
	int a,b;
}p[10];
int i,j,n;
bool reflex()
{
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(p[i].a==p[i].b)
		{
			flag++;
		}
	}
	if(flag==n);
}
bool antisym()
{
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].a==p[j].b && p[i].b==p[j].a)
			{
				flag++;
				break;
			}
		}
	}
	if(flag==1)
		return(0);
	else
		return(1);
}
bool trans()
{
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].a==p[j].b && p[i].b==p[j].a)
			{
				flag++;
				break;
			}
		}
	}
	if(flag==1)
		return(0);
	else
		return(1);
}
int main()
{
	cout<<"Enter no. of ordered pairs : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter pair "<<i+1<<" : ";
		cin>>p[i].a>>p[i].b;
	}
	if(antisym())
		cout<<"Poset";
	else
		cout<<"Posetn't";
	return 0;
}