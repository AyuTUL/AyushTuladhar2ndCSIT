#include<iostream>
#define N 10
using namespace std;
template <class T>
void sort(T a[])
{
	T temp;
	for(int i=0;i<N;i++)
		for(int j=0;j<N-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}
template <class T>
void show(T a[])
{
	for(int i=0;i<N;i++)
		cout<<a[i]<<"\t";
}
template <class T>
void read(T a[])
{
	for(int i=0;i<N;i++)
		cin>>a[i];
}
int main()
{
	int a[N];
	cout<<"Enter 10 integers : ";
	read(a);
	sort(a);
	cout<<"Sorted Array :"<<endl;
	show(a);
	return 0;
}
