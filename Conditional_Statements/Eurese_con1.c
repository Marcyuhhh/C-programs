#include<stdio.h>
int main (){
   
  int T;
  printf("SCHOOL STATUS DETERMINATOR USING TEMPERATURE \n");
  printf("Enter Temperature: ");
  scanf("%d", &T);
  
  if (T<=10)
  printf("No School ");
  else
  printf("School is wide open");
  return 0;
  
}
   