// Program to print the multiplication table (up to 20) of the number entered by the user.
#include<stdio.h>
void main()
{
  int a,b,i,m;
  printf("Enter the number: ");
  scanf("%d",&a);
  printf("Enter the  number of multiples: ");
  scanf("%d",&b);
  for(i=1;i<=b;i++)
  {
    m=i*a;
    printf("%d x %d = %d\n",i,a,m);
  }
}
