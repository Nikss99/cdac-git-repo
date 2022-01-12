#include<stdio.h>
int main()
{
    char grade;
    printf("Enter the grade:");
    scanf("%c" ,&grade);
    printf("grade is :c|n :" ,grade);

    if(grade=='A' || grade=='a')
  {
    printf("grade %c is excellent \n" ,grade);
  }
  else if(grade=='B' || grade=='b')
  {
   printf("grade %c is good \n" ,grade);
  }
  else if(grade=='C' || grade=='c')
  {
   printf("grade %c is fair \n" ,grade);
  }
  else if(grade=='D' || grade=='d')
  {
   printf("grade %c is poor \n" , grade);
  }
  else if(grade=='E' || grade=='e') 
  {
printf("grade %c is fail \n" , grade);
  }
  return 0;
}