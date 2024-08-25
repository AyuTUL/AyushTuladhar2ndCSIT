#include<iostream>
#define M 5
#define N 5
using namespace std;
int m1,n1,m2,n2,a[M][N],b[M][N],s[M][N]={0},p[M][N]={0},i,j,k; 
void read(int m[][N],int r,int c)
{
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>m[i][j];
}
void sum()
{
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			s[i][j]=a[i][j]+b[i][j];
}
void prod()
{
	for(i=0;i<m1;i++)
		for(j=0;j<n2;j++)
			for(k=0;k<n1;k++)
				p[i][j]+=a[i][k]*b[k][j];
}
void show(int m[][N],int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<m[i][j]<<"\t";
		cout<<endl;
	}
}
int main()
{
	int ch;
	char c;
	do
	{
		system("cls");
		cout<<"1. Input Matrix\n2. Addition\n3. Multiplication\n4. Exit\nEnter your choice : ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
			case 1:
				cout<<"Enter order of Matrix A : ";
				cin>>m1>>n1;
				cout<<"Enter order of Matrix B : ";
				cin>>m2>>n2;
				cout<<"Enter elements of Matrix A (="<<m1*n1<<") : ";
				read(a,m1,n1);
				cout<<"Enter elements of Matrix B (="<<m2*n2<<") : ";
				read(b,m2,n2);
				cout<<"Matrix A : "<<endl;
				show(a,m1,n1);
				cout<<"Matrix B : "<<endl;
				show(b,m2,n2);
				break;
			case 2:
				if(m1!=m2 || n1!=n2)
				{
					cout<<"Matrix addition is undefined.";
					break;
				}
				sum();
				cout<<"Matrix A : "<<endl;
				show(a,m1,n1);
				cout<<"Matrix B : "<<endl;
				show(b,m2,n2);
				cout<<"Matrix A + Matrix B : "<<endl;
				show(s,m1,n1);
				break;
			case 3:
				if(n1!=m2)
				{
					cout<<"Matrix multiplication is undefined.";
					break;
				}
				prod();
				cout<<"Matrix A : "<<endl;
				show(a,m1,n1);
				cout<<"Matrix B : "<<endl;
				show(b,m2,n2);
				cout<<"Matrix A x Matrix B : "<<endl;
				show(p,m1,n2);
				break;
			case 4:
				cout<<"End of Program";
				return 0;
		}
		cout<<"\nDo you want to continue? (Y/N) : ";
		cin>>c;	
	}while(c=='y' || c=='Y');
	return 0;
}
