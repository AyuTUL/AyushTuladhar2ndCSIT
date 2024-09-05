#include<iostream>
#define N 5
using namespace std;
bool pushConfirm()
{
	if(fullFlag)
	{
		cout<<endl<<"Stack is full"<<endl;
		return(false);
	}
	char c;
	cout<<endl<<"Do you want to push an item (Y/N) ? : ";
	cin>>c;
	if(c=='Y' || c=='y')
		return(true);
	else
		return(false);
}
bool popConfirm()
{
	if(emptyFlag)
	{
		cout<<"Stack is empty";
		return(false);
	}
	char c;
	cout<<"Do you want to pop an item (Y/N) ? : ";
	cin>>c;
	if(c=='Y' || c=='y')
		return(true);
	else
		return(false);
}
template<class T>
class Stack
{
	private:
		T stk[N];
		int top;
		bool fullFlag=false,emptyFlag=false;
	public:
		Stack()
		{
			top=0;
		}
		void push(T item)
		{
			if(top==N-1)
				fullFlag=true;
			else
			{	
				stk[top]=item;
				top++;
			}
		}
		T pop()
		{
			T temp;
			try
			{
			if(top==-1)
				throw top;
			}
			catch(int top)
			{
				cout<<"Stack is empty"<<endl;
				return 0;
			}
				temp=stk[top];
				stk[top]=0;
				top--;
			
			return temp;
		}
		void viewStack()
		{
			cout<<"Stack :"<<endl;
			for(int i=top;i>=0;i--)
				cout<<stk[i]<<endl;
		}
		bool isFull() const
    {
        return fullFlag;
    }

    bool isEmpty() const
    {
        return emptyFlag;
    }
};
int main()
{
	int ch,i;
	cout<<"1. Integer\n2. Double\n3. Character\nChoose stack type : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
			
			int a[N];
			Stack <int>s1;
			cout<<"Enter "<<N<<" integers : ";
			for(i=0;i<N;i++)
			{
				cin>>a[i];
			}
			--i;
			while(pushConfirm())
			{
				cout<<"i="<<i<<endl<<a[i];
				s1.push(a[i]);
				cout<<endl<<a[i]<<" has been pushed";
				--i;
			}
			
			s1.viewStack();
			while(popConfirm())
			{
				cout<<endl<<"Popped Item = "<<s1.pop()<<endl;
			}
			break;
		}
		case 2:
			{			
			double b[N];
			Stack <double>s2;
			cout<<"Enter "<<N<<" numbers : ";
			for(i=0;i<N;i++)
			{
				cin>>b[i];
				s2.push(b[i]);
			}
			s2.viewStack();
			cout<<endl<<"Popped Item = "<<s2.pop()<<endl;
			break;
		}
		case 3:
			{
			char c[N];
			Stack <char>s3;
			cout<<"Enter "<<N<<" characters : ";
			for(i=0;i<N;i++)
			{
				cin>>c[i];
				s3.push(c[i]);
			}
			s3.viewStack();
			cout<<endl<<"Popped Item = "<<s3.pop()<<endl;
			break;
		}
		default:
			cout<<"Invalid input. Choose from 1-3.";
	}	

	return 0;
}
