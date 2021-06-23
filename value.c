//  Write a Program to find the value of one number raised to the power of the other(if two no.s are entered)
#include<stdio.h>
int main()
{
  int a,b,i,p=1;
  printf("Enter the two numbers: ");
  scanf("%d%d",&a,&b);
  for(i=1;i<=b;i++)
  {
    p = p * a;
  }
  printf("The value is %d\n",p);
}
