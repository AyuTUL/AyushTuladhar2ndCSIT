#include<iostream>
using namespace std;
template<class T>
class Stack;
class StackBase {
public:
    virtual void push(void* item) = 0;
    virtual void*pop() = 0;
    virtual void viewStack()  = 0;
    virtual bool isEmpty()  = 0;
    virtual bool confirmAction(string) = 0;
    virtual int getSize()  = 0;
};
template<class T>
class Stack: public StackBase
{
	private:
		T stk[100];
		int top,n;
		bool fullFlag,emptyFlag;
	public:
		Stack()
		{
			top=-1;
			cout<<"Enter stack size : ";
			cin>>n;
		}
		int getSize()
		{
			return(n);
		}
		void push(void* item)
		{
			emptyFlag=false;
			stk[++top]=*(T*)item;
			cout<<item<<" has been pushed"<<endl;	
			if(top==n-1)
				fullFlag=true;
		}
		void* pop()
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
		bool confirmAction(string action)
		{
			if(action=="push")
				if(fullFlag)
				{
					cout<<endl<<"Stack is full"<<endl;
					return(false);
				}
			else if(action=="pull")
				if(emptyFlag)
				{
					cout<<endl<<"Stack is empty"<<endl;
					return(false);
				}
			char c;
			cout<<endl<<"Do you want to "<<action<<" an item (Y/N) ? : ";
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
	    bool isEmpty() 
	    {
	        return emptyFlag;
	    }
};
int main()
{
	StackBase *s;
	char c;
	void *a;
	int ch,i;
	do
	{
		system("cls");
		cout<<"1. Integer\n2. Double\n3. Character\nChoose stack type : ";
		cin>>ch;
		system("cls");
		if(ch==1 || ch==2 || ch==3)
		{
			if(ch==1)
			{		
				s=new Stack<int>();
				a= new int[s->getSize()];
				cout<<"Enter "<<s->getSize()<<" integers : ";
				for(i=0;i<s->getSize();i++)
					cin>>((int *)a)[i];	
			}
			else if(ch==2)	
			{			
				double a[100];
				s=new Stack<double>();
				cout<<"Enter "<<s->getSize()<<" numbers : ";
				for(i=0;i<s->getSize();i++)
					cin>>((double *)a)[i];
			}
			else if(ch==3)
			{
				char a[100];
				s=new Stack<char>();
				cout<<"Enter "<<s->getSize()<<" characters : ";
				for(i=0;i<s->getSize();i++)
					cin>>((char *)a)[i];
			}
		}	

		i=-1;
		while(s->confirmAction("push"))
			s->push(a[++i]);
		s->viewStack();
		while(s->confirmAction("pull"))
			cout<<"Popped item = "<<s->pop()<<endl;
		if(!s->isEmpty())
		s->viewStack();
		}
	}
		else
			cout<<"Invalid input. Choose from 1-3.";
		cout<<"\nDo you want to continue? (Y/N) : ";
		cin>>c;
	}while(c=='y' || c=='Y');
	return 0;
}
