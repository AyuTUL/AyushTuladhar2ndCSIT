#include<iostream>
using namespace std;
template<class T>
class Stack
{
	private:
		T* stk;
		int top,n;
		bool fullFlag=false,emptyFlag=true;
	public:
		Stack()
		{
			top=-1;
			cout<<"Enter stack size : ";
			cin>>n;
			stk=new T(n);
		}
		~Stack()
		{
			delete[] stk;
		}
		int getSize()
		{
			return(n);
		}
		void push(T item)
		{
			emptyFlag=false;
			stk[++top]=item;
			cout<<item<<" has been pushed"<<endl;	
			if(top==n-1)
				fullFlag=true;
		}
		T pop()
		{
			fullFlag=false;
			T temp;
			temp=stk[top];
			top--;
			if(top==-1)
				emptyFlag=true;
			return(temp);
		}
		void viewStack()
		{
			cout<<endl<<"Stack :"<<endl;
			for(int i=top;i>=0;i--)
				cout<<stk[i]<<endl;
		}
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
				cout<<endl<<"Stack is empty"<<endl;
				return(false);
			}
			char c;
			cout<<endl<<"Do you want to pop an item (Y/N) ? : ";
			cin>>c;
			if(c=='Y' || c=='y')
				return(true);
			else
				return(false);
		}
		bool isFull() 
	    {
	        return fullFlag;
	    }
	    bool isEmpty() 
	    {
	        return emptyFlag;
	    }
};
int main()
{
	char c;
	int ch,i;
	do
	{
		system("cls");
		cout<<"1. Integer\n2. Double\n3. Character\nChoose stack type : ";
		cin>>ch;
		system("cls");
		try{
		switch(ch)
		{
			case 1:
			{
				int a[100];
				Stack <int>s1;
				cout<<"Enter "<<s1.getSize()<<" integers : ";
				for(i=0;i<s1.getSize();i++)
					cin>>a[i];
				i=-1;
				while(s1.pushConfirm())
					s1.push(a[++i]);
				s1.viewStack();
				while(s1.popConfirm())
					cout<<"Popped item = "<<s1.pop()<<endl;
				if(!s1.isEmpty())
				s1.viewStack();
				break;
			}
			case 2:
			{			
				double b[100];
				Stack <double>s2;
				cout<<"Enter "<<s2.getSize()<<" numbers : ";
				for(i=0;i<s2.getSize();i++)
					cin>>b[i];
				i=-1;
				while(s2.pushConfirm())
					s2.push(b[++i]);
				s2.viewStack();
				while(s2.popConfirm())
					cout<<"Popped item = "<<s2.pop()<<endl;
				if(!s2.isEmpty())
				s2.viewStack();
				break;
			}
			case 3:
			{
				char c[100];
				Stack <char>s3;
				cout<<"Enter "<<s3.getSize()<<" integers : ";
				for(i=0;i<s3.getSize();i++)
					cin>>c[i];
				i=-1;
				while(s3.pushConfirm())
					s3.push(c[++i]);
				s3.viewStack();
				while(s3.popConfirm())
					cout<<"Popped item = "<<s3.pop()<<endl;
				if(!s3.isEmpty())
				s3.viewStack();
				break;
			}
			default:
				throw(ch);
				
		}	}
		catch(...)
		{
			cout<<"Invalid input. Choose from 1-3.";
		}
		cout<<"\nTry another? (Y/N) : ";
		fflush(stdin);
		cin>>c;
	}while(c=='y' || c=='Y');
	return 0;
}
