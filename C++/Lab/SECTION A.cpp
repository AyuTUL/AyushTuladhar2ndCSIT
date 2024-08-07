#include<stdio.h>
int main()
{
	int a[10],i,n,l;
	printf("How many numbers? ");
	scanf("%d",&n);
	printf("Enter %d Numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(l<a[i])
		l=a[i];
	}
	printf("largest number is: %d",l); 
}