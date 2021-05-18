/* Program to determine whether the year is leap year or not.
   By using logical operators && and ||
*/
#include<stdio.h>
void main()
{
  int n;
  printf("Enter the year: ");
  scanf("%d",&n);
  if((n%400==0) || (n%4==0 && n%100!=0))
  {
    printf("%d is a leap year\n",n);
  }
  else
  {
    printf("%d is not a leap year\n",n);
  }

}
