#include <iostream>
#include <string.h>
using namespace std;

struct user {
    char n[100];
    float s;
}u1[100],u2[100],r[100];
typedef user use;
    struct user read(int n) 
	{
		struct user u;
        cout << "Enter name & score : ";
        cin >> u.n >> u.s;
        return(u);
    }

    void display(use u[],int num) {
        for (int i = 0; i < num; i++) {
            printf("(%s , %.2f) ", u[i].n, u[i].s);
        }
    }

int main() 
{
    int ch,num,i;
    cout<<"Enter no. of elements :";
    cin>>num;
    cout<<"For 1st set:\n";
    for(int i=0;i<num;i++)
    {
    	u1[i]=read(num);
	}
	cout<<"For 2nd set:\n";
    for(int i=0;i<num;i++)
    {
    	u2[i]=read(num);
	}
    cout << "1. Union\n2. Intersection\n3. Complement\nEnter your choice : ";
    cin >> ch;
    system('cls');
    
    switch (ch) {
        case 1:
            for(i=0;i<num;i++)
        	{
        		for(int j=0;j<num;j++)
        		{
        			if(strcmp(u1[i].n,u2[j].n)==0)
        			{
        				strcpy(r[i].n,u1[i].n);
        				if(u1[i].s>=u2[j].s)
							r[i].s=u1[i].s;
						else
							r[i].s=u2[j].s;
						break;
					}
        		}
           	}
           	display(r,num);
            break;
        
        case 2:
            // Implement Intersection if needed
            break;

        case 3:
			for(i=0;i<num;i++)
        	{
        		for(int j=0;j<num;j++)
        		{
        			if(strcmp(u1[i].n,u2[j].n)==0)
        			{
        				strcpy(r[i].n,u1[i].n);
        				if(u1[i].s<=u2[j].s)
							r[i].s=u1[i].s;
						else
							r[i].s=u2[j].s;
						break;
					}
        		}
           	}
           	display(r,num);
            break;
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
    }

    return 0;
}
