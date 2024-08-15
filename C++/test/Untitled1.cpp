#define N 5
#include<iostream>
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
				cout<<"Stack full"<<endl;
			else
			{
				stk[++top]=el;
				cout<<"One item inserted"<<endl;
			}
		}
		T pop()
		{
			T temp;
			if (top==-1)
				cout<<"Stack is empty"<<endl;
			else
			{
				temp = stk[top];
				stk[top--]=0;
				return temp;
			}
		}
		void print()
		{
			for(int i=top;i>=0;i--)
				cout<<stk[i]<<endl;
		}
		
};
int main()
{
	Stack <int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	Stack <double>s1;
	s1.push(11.11);
	s1.push(13.33);
	Stack <char>s2;
	s2.push('A');
	s2.push('B');
	s2.push('C');
	s.print();
	s1.print();
	s2.print();
}