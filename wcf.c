#include<stdio.h>
#include<math.h>
void main()
{
  float v,t,wcf;
  {
    printf("Enter the velocity: ");
    scanf("%f",&v);
    printf("Enter the temperature: ");
    scanf("%f",&t);
    wcf = 35.74 + (0.6215*t) + ((0.4275*t)-35.75)*pow(v,0.16);
    printf("wind chill factor %f\n",wcf);
  }
}
