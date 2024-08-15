#include<iostream>
#define M 5
#define N 5
using namespace std;
int m1,n1,m2,n2,s[N][],p[][]; 
void read(int m[][],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>m[i][j];
}
void sum(int a[][],int b[][])
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			s[i][j]=a[i][j]+b[i][j];
}
void prod(int a[][],int b[][])
{
	int i,j;
	for(i=0;i<m1;i++)
		for(j=0;i<n2;j++)
			for(k=0;k<n1;k++)
				p[i][j]+=a[i][k]*b[k][j];
}
void show(int m[][],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<m[i][j]<<"\t";
		cout<<endl;
	}
}
int main()
{
	int a[][],b[][];
	re:
	cout<<"Enter order of matrix A :";
	cin>>m1>>n1;
	cout<<"Enter order of matrix B :";
	cin>>m2>>n2;
	if(m1!=m2 && n1!=n2)
	{
		cout<<"Matrix addition is undefined.";
		goto re;
	}
	if(n2!=m1)
	{
		cout<<"Matrix multiplication is undefined.";
		goto re;
	}
	read(a,m1,n1);
	read(b,m2,n2);
	cout<<"Matrix A : "<<endl;
	show(a,m1,n1);
	cout<<"Matrix B : "<<endl;
	show(b,m2,n2);
}