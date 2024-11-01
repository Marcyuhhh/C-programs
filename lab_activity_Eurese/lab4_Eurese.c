#include<stdio.h>
int main()
{
  int n, sum=0,i ;

  for(i=1 ; i<=10; i++)
  {
    printf("Enter number: ");
    scanf("%d",&n);
    if( n<0 ) 
     continue;
    sum += n; 
  }
  
  printf("Sum = %d",sum);

  return 0;
}
