#include<stdio.h>
void main()
  {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0)
    {
      n = -1*n;
    }
    printf("The absolute value is %d\n",n);
}
