#include<stdio.h>
void main()
{
	int cp,sp,profit,loss;
	printf("Enter the cost price and the selling price: ");
	scanf("%d%d",&cp,&sp);
	profit = sp - cp;
	loss = cp - sp;
	if(sp>cp)
	{
		printf(" the profit  is %d\n",profit);
	}
	else if(cp>sp)
	{
		printf("the loss is %d\n",loss);
	}
	else
	{
		printf(" it can be neither profit nor loss"); 
	}
}

