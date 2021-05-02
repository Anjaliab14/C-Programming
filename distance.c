#include<stdio.h>
#include<math.h>
void main()
{
  float l1,l2,g1,g2,d;
  printf("Enter the latitudes: ");
  scanf("%f%f",&l1,&l2);
  printf("Enter the longitude: ");
  scanf("%f%f",&g1,&g2);
  l1 = l1 * (M_PI/180);
  l2 = l2 * (M_PI/180);
  g1 = g1 * (M_PI/180);
  g2 = g2 * (M_PI/180);
  d = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
  printf("distance in nautical miles %f\n",d);
}
