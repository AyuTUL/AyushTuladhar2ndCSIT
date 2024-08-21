#include<iostream>
using namespace std;
int p[3][3]={0};
void read(int m[][3])
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>m[i][j];
}
void display(int m[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<m[i][j]<<"\t";
		cout<<endl;
	}
}
void prod(int m1[][3],int m2[][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
				p[i][j]+=m1[i][k]*m2[k][j];
}
int main()
{
	int m1[3][3],m2[3][3];
	cout<<"Enter elements of Matrix A  : ";
	read(m1);
	cout<<"Enter elements of Matrix B  : ";
	read(m2);
	cout<<"Matrix A : "<<endl;
	display(m1);
	cout<<"Matrix B : "<<endl;
	display(m2);
	prod(m1,m2);
	cout<<"A x B : "<<endl;
	display(p);
	return 0;
}
