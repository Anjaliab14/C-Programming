#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,s,area;
	printf("Enter the three sides: ");
	scanf ("%d%d%d",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle %d\n",area);
	
}
