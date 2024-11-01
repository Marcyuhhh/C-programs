#include <stdio.h>

int main()
{
    float s1, s2, mA, mE, mG;
    printf("Student Midterm Grade Calculator\n");
    printf("\nEnter the student's minor A exam: ");
    scanf("%f" , &s1);
    printf("\nEnter the student’s midterm exam: ");
    scanf("%f" , &s2);
    
   mA=s1*1/3;
   mE=s2*2/3;
   mG=mA+mE;
    
    
    printf("\n The student's midterm grade is: %.2f ", mG);
   
    return 0;
}