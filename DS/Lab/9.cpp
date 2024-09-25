#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
}
int search(int a[],int left,int right, int key)
{
	if(right>=left)
	{
		int mid=left+(right-left)/2;
		if(a[mid]==key)
			return(mid);
		if(a[mid]>key)
			return(search(a,left,mid-1,key));
		return(search(a,mid+1,right,key));
	}
	return -1;
}
int main()
{
	int *a,n,key;
	cout<<"Enter array size : ";
	cin>>n;
	a=new int[n];
	cout<<"Enter "<<n<<" integers : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,n);
	cout<<"Sorted Array :"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<endl<<"Enter integer to be searched : ";
	cin>>key;
	int result=search(a,0,n-1,key);
	if(result==-1)
		cout<<"Integer is not present in array";
	else
		cout<<key<<" found at index "<<result;
	delete[] a;
	return 0;
}
