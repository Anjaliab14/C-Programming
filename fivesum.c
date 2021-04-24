#include<stdio.h>
void main()
{
	int n,s=0,d,i=0;
	printf("Enter the five positive integer: ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
		i++;
	}
	if(i==5)
	{
		printf("sum of the digits %d\n",s);
	}
	else
	{
		printf("Invalid number\n");
	}
}
