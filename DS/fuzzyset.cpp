#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class User 
{
	public:	
    struct uuser
	{
	string n;
    double s;
	}u[100];
	User()
    {
    	cout<<"Enter no. of elements : ";
	    cin>>num;
	    cout<<"Enter name & score : ";
		for(int i=0;i<num;i++)
		{
			printf("\nFor element %d : ",i+1);
			cin>>u[i].n>>u[i].s;
		}
	}
    void display()
    {
    	int i;
    	for(i=0;i<num;i++)
    	{
    		printf("%s %d",u[i].n,u[i].s);
		}
	}
	void con(User u)
	{
		
	User u1,u2,r;
    int ch,n,i;
    cout<<"1. Union\n2. Intersection\n3. Complement\nEnter your choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        	for(i=0;i<num;i++)
        	{
        		r=u1.u[i].con(u2);
        	
        case 3:
            for(i=0;i<n;i++)
        	{
        		for(int j=0;j<n;j++)
        		{
        			if(strcmp(u1[i].n,u2[j].n)==0)
        			{
        				strcpy(r[i].n,u1[i].n);
        				if(u1[i].s<=u2[j].s)
							r[i].s=u1[i].s;
						else
							r[i].s=u2[i].s;
						break;
					}
        		}
           	}
           	r.display(n);
            
           	u1.display(n);
           	for(i=0;i<n;i++)
        	{
        		u1[i].s=1-u1[i].s;
        		u2[i].s=1-u2[i].s;
           	}u2.display(n);
        default:
                cout<<"Invalid Input"<< endl;
	}
	return 0;
}         
   