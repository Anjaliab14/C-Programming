// Program to print 24 hours of a date with suitable suffixes such as AM,PM,Noon,Midnight.
#include<stdio.h>
#include<time.h>
int main()
{
  int h;
  for(h=0;h<24;h++)
  {
    if(h==0)
    {
      printf("12:00 - Midnight\n");
    }
    if(h<12)
    {
    printf("%02d - AM\n",h);
    }
    if(h==12)
    {
      printf("\n%d:00 - Noon\n",h);
    }
    if(h>12)
    {
      printf("%02d:00 - PM\n",h%12);
    }
  }
}
