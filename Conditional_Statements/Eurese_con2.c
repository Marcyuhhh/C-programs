#include<stdio.h>
int main (){
   
  int T;
  printf("TEMPERATURE STATUS \n");
  printf("Enter Temperature: ");
  scanf("%d", &T);
  
  if (T>=50)
  printf("warm ");
  else
  printf("Cold");
  return 0;
  
}
   