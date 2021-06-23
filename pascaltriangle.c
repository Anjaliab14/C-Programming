// Program to create a pascals triangle.
#include<stdio.h>
int main()
{
  int n,i,j,k,temp;
  printf("Enter the no.of rows: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      printf(" ");
      temp = 1;
    }
    for(k=0;k<=i;k++)
    {
      printf("%d  ",temp);
      temp = temp*(i-k)/(k+1);
    }
    printf("\n");
  }
}
