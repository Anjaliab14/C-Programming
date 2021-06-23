/* Write a menu driven program which has the following options
   a. Factorial of a number
   b. Prime or Not
   c. Odd or Even
   d. Exit
*/
#include<stdio.h>
int main ()
{
  int n,choice,i,fact=1,flag=0,ncopy;
  do
  {
    printf("\na. Factorial of a number\nb. Prime or Not\nc. Odd or Even\nd. Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        printf("Enter the number: ");
        scanf("%d",&n);
        i=1;
        while(i<=n)
        {
          fact=fact*i;
          i++;
        }
        printf("Factorial of %d is %d\n",n,fact);
        break;
      case 2:
        printf("Enter the number: ");
        scanf("%d",&n);
        ncopy=n;
        for(i=2;i<=n/2;i++)
        {
          if(n%i==0)
          {
            flag=1;
            break;
          }
        }
        if(flag==0 && n>=2)
        {
          printf("%d is a prime number\n",n);
        }
        else
        {
          printf("%d is not a prime number\n",n);
        }
        break;
      case 3:
        printf("Enter the number: ");
        scanf("%d",&n);
        if(n%2==0)
        {
          printf("%d is an even number\n",n);
        }
        else
        {
          printf("%d is an odd number\n",n);
        }
        break;
      case 4:
        printf("Exit\n");
        break;
      default:
          printf("Invalid number\n");
    }
  }while(choice!=4);
  printf("\n");
}
