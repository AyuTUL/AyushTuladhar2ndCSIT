include<stdio.h>
include<conio.h>
int isprimee(int);
void main()
{
	int n;
	printf("enter an integer:");
	scanf("%d",&n);
	if (isprime(n))
	{
		printf("%d is prime",n);
	}
	getch();
	
}
int isprime(int n){
	int i,factor=0;
	for(i=1; i<=n; i++){
		if(n%i==0){
			factor++;
		}
	
	}
	if(factor==2)
	return(1);
	else
	return(0);
}