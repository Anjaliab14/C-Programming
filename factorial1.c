//Program to print the factorial of a number
#include<stdio.h>
 void main()
{
	int n,i=1,fact=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact = fact * i;
		printf("%d",i);
		if(i!=n)
		{
			printf("x");
		}
		i++;
	}
	printf("=%d\n",fact);
}
