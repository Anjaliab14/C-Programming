// Program to determine the largest among three numbers using conditional operator
#include<stdio.h>
int main()
{
  int a,b,c,largest;
  printf("Enter the three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  largest = (a>b && a>c) ? a : (b>a && b>c) ? b : c;
  printf("The largest is %d\n",largest);
}
