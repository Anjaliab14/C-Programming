#include<stdio.h>
void main()
{
  int a,b,c,sum;
  printf("Enter the angles: ");
  scanf("%d%d%d",&a,&b,&c);
  sum = a+b+c;
  if(sum==180)
  {
    printf("the triangle is valid \n");
  }
  else
  {
    printf("Invalid triangle\n");
  }
}
