#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b;
	printf("Enter the number: ");
	scanf("%d",&n);
	a=cbrt(n);
	b=a*a*a;	
	if(b==n)
	{
		printf("cube root of %d is %d\n",n,a);
	}
	else
	{
		printf("it is not a perfect cube\n");
	}


}
