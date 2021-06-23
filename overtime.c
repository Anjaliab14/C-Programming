/* Program to calculate overtime pay of 10 employees.Overtime is paid at a rate of Rs.12.00 per hour
   for every hour worked above 40 hours.Assume that employees do not work for a fractional part of an hour.
*/
#include<stdio.h>
int main()
{
  float wh,ot,count,otp;  // working hours(wh) , over time(ot) , over time pay (otp)
  for(count=1;count<=10;count++)
  {
    printf("Enter the working hours of employee no %f: ",count);
    scanf("%f",&wh);
    if(wh>40)
    {
      ot = wh - 40;
      otp = ot * 12.00;
      printf("Employees no is %f overtime pay is %f\n",count,otp);
    }
    else
    {
      printf("You have to work for more than 40 hours to get over time pay\n");
    }
  }

}
