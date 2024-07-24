#include<stdio.h>
void main()
{
	int a , b, rem, quo;
	printf("Enter dividend and divisor: ");
	scanf("%d %d",&a,&b);
	quo = a/b;
	rem = a%b;
	printf("%d %d",quo,rem);
}