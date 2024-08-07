//wap to sort n numbers using template function

#include<iostream>
using namespace std;
#define N 5

template <class T>
void sort(T a[])
{
	int i,j;
	T temp;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
template<class T>
void print(T a[])
{
	for(int i=0;i<N;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
	double a1[]={3.2,4.5,3.3,10.2,7.5};
	int a2[]={8,32,56,7,2};
	char a3[]={'j','a','g','e','r'};
	sort(a1);
	print(a1);
	sort(a2);
	print(a2);
	sort(a3);
	print(a3);
	return 0;
}