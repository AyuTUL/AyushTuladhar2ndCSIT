#include<iostream>
using namespace std;
int p[5][5];
void read(int r,int c,int m[][5])
{
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>m[i][j];
}
void display(int r,int c,int m[][5])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<m[i][j]<<"\t";
		cout<<endl;
	}
}
void prod(int r1,int c2,int c1,int m1[][5],int m2[][5])
{
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			p[i][j]=0;
			for(k=0;k<c1;k++)
				p[i][j]+=m1[i][k]*m2[k][j];
		}
	}
}
int main()
{
	int r1,c1,r2,c2, m1[5][5],m2[5][5];
	cout<<"Enter order of Matrix A : ";
	cin>>r1>>c1;
	cout<<"Enter order of Matrix B: ";
	cin>>r2>>c2;
	if(c1!=r2)
	{
		cout<<"Matrix multiplication is undefined.";
		return 0;
	}
	cout<<"Enter elements of Matrix A ("<<r1*c1<<") : ";
	read(r1,c1,m1);
	cout<<"Enter elements of Matrix B ("<<r2*c2<<") : ";
	read(r2,c2,m2);
	cout<<"Matrix A : "<<endl;
	display(r1,c1,m1);
	cout<<"Matrix B : "<<endl;
	display(r2,c2,m2);
	prod(r1,c2,c1,m1,m2);
	cout<<"A x B : "<<endl;
	display(r1,c2,p);
}