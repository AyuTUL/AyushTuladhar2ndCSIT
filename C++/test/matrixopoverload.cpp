#include<iostream>
using namespace std;
class Matrix
{
	private:
		int m[3][3],i,j;
	public:
		void read()
		{
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					cin>>m[i][j];
		}
		void display()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cout<<m[i][j]<<"\t";
				cout<<endl;
			}
		}
		Matrix operator +(Matrix m2)
		{
			Matrix temp;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					temp.m[i][j]=m[i][j]+m2.m[i][j];
			return(temp);
		}
		Matrix operator *(int c)
		{
			Matrix temp;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					temp.m[i][j]=c*m[i][j];
			return(temp);
		}
		Matrix operator *(Matrix m2)
		{
			int k;
			Matrix temp;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
				{
					temp.m[i][j]=0;
					for(k=0;k<3;k++)
						temp.m[i][j]+=m[i][k]*m2.m[k][j];
				}
			return(temp);
		}
};
int main()
{
	Matrix m1,m2,m3;
	cout<<"Enter elements of Matrix A : ";
	m1.read();
	cout<<"Enter elements of Matrix B : ";
	m2.read();
	cout<<endl<<"Matrix A :"<<endl;
	m1.display();
	cout<<endl<<"Matrix A + Matrix B :"<<endl;
	m3=m1+m2;
	m3.display();
	cout<<endl<<"3 * Matrix A : "<<endl;
	m1=m1*3;
	m1.display();
	cout<<"Matrix 3 * A * Matrix B :"<<endl;
	m3=m1*m2;
	m3.display();
	return 0;
}