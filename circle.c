#include<stdio.h>
#include<math.h>
void main()
{
  int x1,y1,r,x2,y2,d;
  printf("Enter the centre cooordinates(x1,y1): ");
  scanf("%d%d",&x1,&y1);
  printf("Enter the radius: ");
  scanf("%d",&r);
  printf("Enter the point(x2,y2)to find position: ");
  scanf("%d%d",&x2,&y2);
  d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  if(d>r)
  {
    printf("Points lies outside the circle\n");
  }
  else if(d<r)
  {
    printf("Points lies inside the circle\n");
  }
  else
  {
    printf("Points lies on the circle\n");
  }
}
