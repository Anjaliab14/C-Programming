#include<stdio.h>
void main()
{
	int n,l,rev=0,i=0;
	printf("Enter  the five digit positive integer: ");
	scanf("%d",&n);
	while(n>0)
	{
		l=n%10;
		rev=rev*10+l;
	        n=n/10;
		i++;
	}
	if(i==5)
	{
		printf("rev = %d\n",rev);
	}
	else
	{
		printf("Invalid number\n");
	}
}
