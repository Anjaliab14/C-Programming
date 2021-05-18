// Program to check whether a triangle is isosceles,equilateral or right angled triangle.
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the sides of a triangle: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b!=c || b==c && c!=a || c==a && a!=b)
  {
    printf("It is an isosceles triangle\n");
  }
  else if(a==b && b==c && c==a)
  {
    printf("It is an equilateral triangle\n");
  }
  else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
  {
    printf("It is an right angled triangle\n");
  }
  else
  {
    printf("Invalid triangle\n");
  }
}
