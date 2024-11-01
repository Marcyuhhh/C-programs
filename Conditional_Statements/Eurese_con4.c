#include<stdio.h>

int main(void)
{
 
 char mathOperator;
 float n1, n2;
 printf("MATHEMATICAL OPERATIONS IN ONE PROGRAM\n");
printf("A = Addition\nS= Subtraction\nM= Multiplication\nD= Division ");

printf("\nPlease enter a letter for a corresponding operation you like: ");
 scanf("%c",&mathOperator);
printf("\n Please enter first integer: ");
scanf("%f",&n1);
printf("\n Please enter second  integer: ");
scanf("%f",&n2);

 
 
 switch (mathOperator)
 {
  case 'A':
       printf("\nThe sum of two numbers is: %f\n", n1 + n2);
       break;
  case 'S':
       printf("\nThe difference of two numbers is: %f\n", n1 - n2);
       break;
  case 'M':
       printf("\nThe product of two numbers is: %f\n", n1 * n2);
       break;
  case 'D':
       printf("\nThe quotient of two numbers is: %.2f\n", n1/n2);
       break;
  default:
       printf("\nERROR PLEASE TRY AGAIN\n");
       break;
 }
 return 0;
}  