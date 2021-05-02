#include<stdio.h>
void main()
{
  int x,y;
  printf("Enter the points: ");
  scanf("%d%d",&x,&y);\
  if(x==0 && y>0)
  {
    printf("points lies on x axis\n");
  }
  else if(x>0 && y==0)
  {
    printf("points lies in y axis\n");
  }
  else if(x==0 && y==0)
  {
    printf("points are passing through the origin\n");
  }
  else
  {
    printf("Invalid points\n");
  }

}
