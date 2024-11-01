 #include <stdio.h> 
  int main() {    
  int i, sum=0;   
   printf("The sum of numbers between 1 and 1000 divisible by 3");    
   for(i=1;i<=1000;i++){     
    if(i%3==0){          
	    sum+=i;     
		}    
	}   
	printf("\nThe sum : %d \n",sum);
	
	return 0;
	}  
