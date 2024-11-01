#include<stdio.h>
int main (){
   
  int T;
  printf("SCHOOL STATUS DETERMINATOR USING TEMPERATURE \n");
  printf("Enter Temperature: ");
  scanf("%d", &T);
  
  if (T>=90)
  printf("TOO HOT ");
  else if(T<=50)
  printf("TOO COLD");
  else
  printf("OK");
  
  return 0;
  
}
   