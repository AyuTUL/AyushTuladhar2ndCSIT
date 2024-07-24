#include<iostream>
using namespace std;
class matrix
{
	private:
		int m[3][3];
	public:
		void read()
		{
			cout<<"Enter elements of matrix: "<<endl;
			for(int i=0;i<3;i++)
				for(int j=0;j<3;j++)
					cin>>m[i][j];
			
		}
		void display()
		{
			cout<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<m[i][j]<<"  ";
				}
				cout<<endl;
			}
		}
		matrix operator +(matrix m1)
		{
			matrix temp;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					temp.m[i][j]=m[i][j]+m1.m[i][j];
				}
			}
			return temp;
		}
		matrix operator -(matrix m1)
		{
			matrix temp;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					temp.m[i][j]=m[i][j]-m1.m[i][j];
				}
			}
			return temp;
		}
		matrix operator *(matrix m1)
		{
			matrix temp;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
						temp.m[i][j]=0;
					for(int k=0;k<3;k++)
					{
					
						temp.m[i][j]+=m[i][k]*m1.m[k][j];
					}
				}
			}
			return temp;
		}
		matrix operator *(int m1)
		{
			matrix temp;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					temp.m[i][j]=m[i][j]*m1;
				}
			}
			return temp;
		
		}
		
		
		
		
		
			
};

int main()
{
	matrix m1,m2,m3,m4;
	m1.read();
	m2.read();
	m3.read();
	m4=m1+m2-(m1*3)*m3;
	m4.display();
	return 0;
}