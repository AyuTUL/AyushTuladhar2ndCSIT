#include<iostream>
#include<cstdlib>
#define N 100
using namespace std;
class Set
{
	private:
		int n;
		string name[N];
		double score[N];
		int find(string element)
		{
	        for(int i=0;i<n;i++)
	            if(name[i]==element)
	                return i;
	        return -1;
	    }
	    Set operation(Set &s,bool isUnion) 
		{
			Set temp;
			temp.n=0;
	        for(int i=0;i<n;i++) 
			{ 
	            int index=s.find(name[i]);
	        	temp.name[temp.n]=name[i];
				if(index!=-1)
	            {
	            	if(isUnion)
	                	temp.score[temp.n]=(score[i]>=s.score[index])?score[i]:s.score[index];
	                else
	                	temp.score[temp.n]=(score[i]<=s.score[index])?score[i]:s.score[index];
				}
				else
					temp.score[temp.n]=isUnion?score[i]:0;
				temp.n++;
	        }
	        for(int i=0;i<s.n;i++) 
			{
	            if(find(s.name[i])==-1)
				{  
	                temp.name[temp.n]=s.name[i];		
					temp.score[temp.n]=isUnion?s.score[i]:0;
					temp.n++;
	            }
	        }
	        return(temp);
	    }
	public:
		void read()
		{
			cout<<"Enter no. of elements : ";
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Enter name & score : ";
				cin>>name[i]>>score[i];
			}
		}
		void show()
		{
			cout<<"{ ";    
			for(int i=0;i<n;i++) 
			{	
		        cout<<"( "<<name[i]<<" , "<<score[i]<<" )";
		        if(i<n-1)
		        	cout<<" , ";   
		    }
		    cout<<" }"<<endl;
		}
		Set operator |(Set &s) 
		{
	        return(operation(s,true));
	    }
	    Set operator &(Set &s) 
		{
	        return(operation(s,false));
	    }
	    Set operator !()
	    {
	    	Set temp;
	    	temp.n=n;
	    	for(int i=0;i<n;i++)
	    	{
	    		temp.name[i]=name[i];
	    		temp.score[i]=1-score[i];
			}
			return(temp);
		}
};
int main() 
{
	Set a,b,r1,r2;
    int ch;
    char c;
    cout<<"For Set A :"<<endl;
    a.read();
	cout<<endl<<"For 2nd set :"<<endl;
	b.read();
    do
    {
    	system("cls");
    	cout<<"Fuzzy Set Operations :\n1. Union\n2. Intersection\n3. Complement\n4. Exit\nEnter your choice : ";
	    cin>>ch;
	    system("cls");
	    cout<<"Set A :"<<endl;
		a.show();
		cout<<endl<<"Set B :"<<endl;
	    b.show();
	    switch (ch) 
		{
	        case 1:
	            r1=a|b;
	           	cout<<endl<<"Union :"<<endl;
	           	r1.show();
	            break;
	        case 2:
	            r1=a&b;
	           	cout<<endl<<"Intersection :"<<endl;
	           	r1.show();
	            break;
	        case 3:
				r1=!a;
				r2=!b;
	           	cout<<endl<<"Complement of Set A :"<<endl;
	           	r1.show();
	           	cout<<endl<<"Complement of Set B :"<<endl;
	           	r2.show();
	            break;
	        case 4:
	        	cout<<endl<<"End of program";
	        	exit(0);
	        default:
	            cout<<"Invalid Input"<<endl;
	    }
	    cout<<endl<<"Do you want to continue? (Y/N) : ";
	    cin>>c;
	}while(c=='y' || c=='Y');
    return 0;
}
