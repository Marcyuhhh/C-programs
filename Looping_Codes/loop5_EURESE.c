#include<stdio.h>

int main(){
	
	int a,F=1,n;
	printf("THE FACTORIAL OF THE NUMBER YOU'VE ENTER\n");
    printf("Enter a number to find factorial: ");
    scanf("%d",&n); 

    for(a=1;a<=n;a++)
        F=F*a;
    printf("Factorial of %d is: %d",n,F);

    
    return 0;

}
