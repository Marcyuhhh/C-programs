#include <stdio.h>
int main()
{
   //P is Price, D is Discount and FP is Final Price//
   float P, D,FP;
   printf("DISCOUNT CALCULATOR\n");
   printf("Enter the price: ");
   scanf("%f", &P);
  
  if (P>1000) {
      D= P*.1;
      FP=P-D;
      printf("Your discounted price is: %.2f",FP);
  }
  else
  printf("No discount, your price is still the same: %.2f", P);
      
      return 0;
}
      
 
 