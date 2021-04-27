#include<stdio.h>
void main()
{
	int n,r;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n>=100)
	{
		r = n / 100;
		n = n % 100;
		printf("Rs 100 =%d\n",r);
	}
	if(n>=50)
	{
		r = n / 50;
		n = n % 50;
		printf("Rs 50 =%d\n",r);
	}
	if(n>=10)
	{
		r = n / 10;
		n = n % 10;
		printf("Rs 10 =%d\n",r);
	}
	if(n>=5)
	{
		r = n / 5;
		n = n % 5;
		printf("Rs 5 =%d\n",r);
	}
	if(n>=2)
	{
		r = n / 2;
		n = n % 2;
		printf("Rs 2 =%d\n",r);
	}
	if(n>=1)
	{
		r = n / 1;
		n = n % 1;
		printf("Rs 1 =%d\n",r);
	}
	printf("smallest number of notes %d\n",r);
	
}
