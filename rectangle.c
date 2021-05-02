#include<stdio.h>
void main()
{
  int l,b,area,perimeter;
  printf("Enter the length and breadth of a rectangle: ");
  scanf("%d%d",&l,&b);
  area=l*b;
  perimeter=2*(l+b);
  if(area>perimeter)
  {
    printf(" Area = %d that is greater than its perimeter,%d\n",area,perimeter);
  }
  else
  {
    printf(" Area = %d which is less than its perimeter,%d\n",area,perimeter);
  }
  printf("\n");
}
