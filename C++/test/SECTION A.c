#include<stdio.h>
int sum (int n);
void main()
{
	int n,s;
	printf("enter a number:");
	    scanf("%d",&n);
	    s= sum (n);
	    printf("sum is %d",s);
}
          int sum (int n)
          {
          	if(n==1)
          	{
          		return 1;
			  }
			  else
			  {
			  	return n+sum (n-1);
			  }
		  }