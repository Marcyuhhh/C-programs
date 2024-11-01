#include<stdio.h>
int main()
{
 char mathOperator;
 int n1, n2;
printf("A = Addition, S= Subtraction\nM= Multiplication, D= Division ");
 printf("\nPlease select a letter for a corresponding operation you like: ");
 scanf("%c",&mathOperator);

 printf("\n Please enter two integers\n");
 scanf("%d %d",&n1,&n2);

 switch (mathOperator)
 {
  case 'A':
       printf("Addition of two numbers is: %d", n1 + n2);
       break;
  case 'S':
       printf("Subtraction of two numbers is: %d", n1 - n2);
       break;
  case 'M':
       printf("Multiplication of two numbers is: %d", n1 * n2);
       break;
  case 'D':
       printf("Division of two numbers is: %d", n1/n2);
       break;
  default:
       printf("You have entered Wrong operator\n");
       break;
 }
 return 0;
} 