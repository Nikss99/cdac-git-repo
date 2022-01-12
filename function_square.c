#include<stdio.h>
void find_square(int n);

 int main()
{
 int num;
 printf("Enter the number :");
 scanf("%d",&num);

 find_square(num);
 return 0;
}
void find_square(int n)
{
 int square=n*n;

 printf("The square of the number is :%d" , square);
}