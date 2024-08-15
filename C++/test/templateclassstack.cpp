#include<iostream>
#define N 5
using namespace std;
template<class T>
class Stack
{
	private:
		T stk[N];
		int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(T el)
		{
			if(top==N-1)
				cout<<"Stack is full"<<endl;
			else
			{	
				stk[++top]=el;
				cout<<"One item pushed"<<endl;
			}
		}
		T pop()
		{
			T temp;
			if (top==-1)
				cout<<"Stack is empty"<<endl;
			else
			{
				temp=stk[top];
				stk[top]=0;
				top--;
			}
			return temp;
		}
		void print()
		{
			for(int i=top;i>=0;i--)
				cout<<stk[i]<<endl;
		}
};
int main()
{
	int a[N],i;
	Stack <int>s;
	cout<<"Enter "<<N<<" integers : ";
	for(i=0;i<N;i++)
	{
		cin>>a[i];
		s.push(a[i]);
	}	
	s.print();
	cout<<endl<<"Popped Item = "<<s.pop()<<endl;
	double b[N];
	Stack <double>s1;
	cout<<"Enter "<<N<<" numbers : ";
	for(i=0;i<N;i++)
	{
		cin>>b[i];
		s1.push(b[i]);
	}
	s1.print();
	cout<<endl<<"Popped Item = "<<s1.pop()<<endl;
	char  c[N];
	Stack <char>s2;
	cout<<"Enter "<<N<<" characters : ";
	for(int i=0;i<N;i++)
	{
		cin>>c[i];
		s2.push(c[i]);
	}
	s2.print();
	cout<<endl<<"Popped Item = "<<s2.pop()<<endl;
	return 0;
}