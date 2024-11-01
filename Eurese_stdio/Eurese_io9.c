#include<stdio.h>

int main() {
  
  float N1, N2, EV;
  printf("\n VALUES EXCHANGER\n");
  printf("Enter first number: ");
  scanf("%f", &N1);
  printf("Enter second number: ");
  scanf("%f", &N2);

  EV = N1;
  N1 = N2;
  N2= EV;
  
  printf("\nVALUES EXCHANGED ");
  printf("\nfirst number = %.2f", N1);
  printf("\nsecond number = %.2f", N2);
  return 0;
}
 