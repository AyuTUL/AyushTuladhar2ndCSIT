#include<iostream>
using namespace std;
void merge(int a[],int left,int mid,int right)
{
	int n1=mid-left+1;
	int n2=right-mid;
	int *l=new int[n1];
	int *r=new int[n2];
	for(int i=0;i<n1;i++)
		l[i]=a[left+i];
	for(int j=0;j<n2;j++)
		r[j]=a[mid+1+j];
	int i=0;
	int j=0;
	int k=left;
	while(i<n1 && j<n2)
	{
		if(l[i]<=r[j])
		{
			a[k]=l[i];
			i++;
		}
		else
		{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=r[j];
		j++;
		k++;
	}
	delete[] l;
	delete[] r;
}
void mergeSort(int a[],int left,int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
int main()
{
	int *a,n;
	cout<<"Enter no. of integers : ";
	cin>>n;
	a=new int[n];
	cout<<"Enter "<<n<<" integers : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Array :"<<endl;
	print(a,n);
	mergeSort(a,0,n-1);
	cout<<endl<<"Sorted Array :"<<endl;
	print(a,n);
	delete[] a;
	return 0;
}
