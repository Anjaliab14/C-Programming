#include<stdio.h>
void main()
{
  int x1,y1,x2,y2,x3,y3, l,m;
  printf("Enter the first point: ");
  scanf("%d%d",&x1,&y1);
  printf("Enter the second point: ");
  scanf("%d%d",&x2,&y2);
  printf("Enter the third point: ");
  scanf("%d%d",&x3,&y3);
  l = (y2-y1)/(x2-x1);
  m = (y3-y2)/(x3-x2);
  if(l==m)
  {
    printf("The points falls on one straight line\n");
  }
  else
  {
    printf("The points  didn't falls on a straight line\n");
  }
}
