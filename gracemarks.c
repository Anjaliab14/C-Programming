/* Write a program to find the grace marks for a student using switch.The user should enter the class
   obtained by the student and the number of students he has failed in.Using the given logics:
   1. if the student gets first class and the number of subjects he failed in is greater than 3,
      then  he has no grace else grace is 5 marks per subject.
   2. if the student gets second class and the number of subjects he failed in is greater than 2,
      then  he has no grace else grace is 4 marks per subject.
   3. if the student gets first class and the number of subjects he failed in is greater than 1,
      then  he has no grace else grace is 5 marks per subject.
*/
#include<stdio.h>
int main()
{
  int class,sub;
  printf("Enter the class obtained by the student: ");
  scanf("%d",&class);
  printf("Enter the number of subjects he has failed: ");
  scanf("%d",&sub);
  switch(class)
  {
    // for first class students
    case 1:
      if(sub<=3)
      {
        printf("he got grace of %d marks\n",5*sub);
      }
      else
      {
        printf("No grace\n");
      }
      break;
      // for second class students
   case 2:
     if(sub<=2)
     {
       printf("he got grace of %d marks\n",4*sub);
     }
     else
     {
       printf("No grace\n");
     }
     break;
     // for third class students
   case 3:
      if(sub<=1)
      {
        printf("he got grace of %d marks\n",5*sub);
      }
      else
      {
        printf("No grace\n");
      }
      break;
   default:
      printf("Entered the wrong class\n");

  }

}
