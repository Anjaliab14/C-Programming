/* Write a program that receives weight and height,calculates the BMI and reports the BMI cateogory
  BMI = Weight / (Height * Height)
*/
#include<stdio.h>
int main()
{
  float w,h,bmi;
  printf("Enter the weight in kilogram and height in metres: ");
  scanf("%f%f",&w,&h);
  bmi = w / (h*h);
  printf("BMI is %f\n",bmi);
  if(bmi<15)
  {
    printf(" The bmi category is Starvation\n");
  }
  else if(bmi>=15.1 && bmi<=17.5)
  {
    printf(" The bmi category is Anorexic\n");
  }
  else if(bmi>=17.6 && bmi<=18.5)
  {
    printf(" The bmi category is Underweight\n");
  }
  else if(bmi>=18.6 && bmi<=24.9)
  {
    printf("The bmi category is Ideal\n");
  }
  else if(bmi>=25 && bmi<=25.9)
  {
    printf("The bmi category is Overweight\n");
  }
  else if(bmi>=30 && bmi<=30.9)
  {
    printf("The bmi of category Obese\n");
  }
  else if(bmi>=40)
  {
    printf("The bmi category is Morbidly Obese\n");
  }

}
