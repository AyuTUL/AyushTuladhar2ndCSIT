#include<iostream>
using namespace std;
#define n 5
template<class T>
void sort(T a[])
{
	int i,j;
	T temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}
template<class T>
void show(T a[])
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
int main()
{
	int a[n],i;
	cout<<"Enter "<<n<<" elements : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a);
	show(a);
	return 0;
}