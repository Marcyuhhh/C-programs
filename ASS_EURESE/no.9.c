#include <stdio.h>

int main() {

  int X, Y, R;

  printf("Enter the number of X: ");
  scanf("%d", &X);
  printf("Enter the number of Y: ");
  scanf("%d", &Y);
 
  if ((X-Y)==0)
    R= 2*X-2*Y;
  else if((X-Y)>0)
  R=X*Y;
  else 
  R=X+Y;
    printf("%d is the value of X.", X);
    printf("\n%d is the value of Y.", Y);
    printf("\n%d is the value of R.", R);

  return 0;
}  