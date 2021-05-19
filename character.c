/* program  to detemine whether the character is a capital letter,
  small letter,a digit or a special character.
*/
#include<stdio.h>
void main()
{
  char c;
  printf("Enter the character: ");
  scanf("%c",&c);
  if(c>=65 && c<=90)
  {
    printf("Capital letter\n");
  }
  else if(c>=97 && c<=122)
  {
    printf("Small letter\n");
  }
  else if(c>=48 && c<=57)
  {
    printf("A Digit\n");
  }
  else if(c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127)
  {
    printf("Special symbols\n");
  }
  else
  {
    printf("invalid character\n");
  }
}
