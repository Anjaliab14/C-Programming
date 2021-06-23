// Program to generate all combinations of 1,2,3using for loop
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=3;i++)
  {
    for(j=i;j<=3;j++)
    {
      for(k=1;k<=3;k++)
      {
          printf("%d%d%d\n",i,j,k);
      }
    }
  }
}
