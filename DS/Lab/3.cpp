#include<iostream>
#include<stdlib.h>
#define N 100
using namespace std;
class Matrix
{
	private:
		bool m[N][N];
		int r,c;
	public:
		void read()
		{
			cout<<"Enter order of matrix : ";
			cin>>r>>c;
			cout<<"Enter "<<r*c<<" elements : ";
			for(int i=0;i<r;i++)
				for(int j=0;j<c;j++)
					cin>>m[i][j];
		}
		void check(Matrix a)
		{
			if(r!=a.r || c!=a.c)
			{
				cout<<"Boolean matrix operations cannot be performed.";
				exit(0);
			}
		}
		void display()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
					cout<<m[i][j]<<"\t";
				cout<<endl;
			}
		}
		Matrix operation(Matrix a,int op)
		{
			Matrix temp;
			temp=*this;
			for(int i=0;i<r;i++)
				for(int j=0;j<c;j++)
					switch(op)
					{
						case 1:
							temp.m[i][j]=m[i][j]&&a.m[i][j];
							break;
						case 2:
							temp.m[i][j]=m[i][j]||a.m[i][j];
							break;
						case 3:
							temp.m[i][j]=!m[i][j];
							break;
						case 4:
							temp.m[i][j]=!m[i][j]||a.m[i][j];
							break;
						case 5:
							temp.m[i][j]=m[i][j]==a.m[i][j];
							break;
					}
			return(temp);
		}
};
int main()
{
	Matrix a,b,r1,r2;
	int ch;
	char c;
	cout<<"For boolean matrix A :"<<endl;
	a.read();
	cout<<"For boolean matrix B :"<<endl;
	b.read();
	a.check(b);
	do
	{
		system("cls");
		cout<<"Matrix A :"<<endl;
		a.display();
		cout<<endl<<"Matrix B :"<<endl;
		b.display();
		cout<<endl<<"Boolean Matrix Operations:\n1. Conjunction (^)\n2. Disjunction (v)\n3. Negation (~)\n4. Implication (=>)\n5. Bi-Implication (<=>)\n6. Exit\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				r1=a.operation(b,ch);
				cout<<endl<<"Matrix A ^ Matrix B :"<<endl;
				r1.display();
		  		break;
		  	case 2:
		  		r1=a.operation(b,ch);
		  		cout<<endl<<"Matrix A V Matrix B :"<<endl;
		  		r1.display();
		  		break;
			case 3:
				r1=a.operation(a,ch);
				r2=b.operation(b,ch);
				cout<<endl<<"~ Matrix A :"<<endl;
				r1.display();
				cout<<endl<<"~ Matrix B :"<<endl;
				r2.display();
				break;
		    case 4:
		    	r1=a.operation(b,ch);
		  		cout<<endl<<"Matrix A => Matrix B :"<<endl;
		  		r1.display();
		  		break;
			case 5:
				r1=a.operation(b,ch);
		  		cout<<endl<<"Matrix A <=> Matrix B :"<<endl;
		  		r1.display();
		  		break;
		  	case 6:
		  		cout<<endl<<"End of Program";
		  		exit(0);
		    default :
				cout<<"Invalid input.";
				break;
		}
		cout<<endl<<"Do you want to continue? (Y/N) : ";
		cin>>c;
	}while(c=='Y' || c=='y');
	return 0;
}
