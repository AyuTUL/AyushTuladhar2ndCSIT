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
	cout<<"Enter "<<N<<" integers : ";
	read(a);
	sort(a);
	cout<<"Sorted array of integers :"<<endl;
	show(a);
	double b[N];
	cout<<endl<<endl<<"Enter "<<N<<" real numbers : ";
	read(b);
	sort(b);
	cout<<"Sorted array of real numbers :"<<endl;
	show(b);
	return 0;
}
