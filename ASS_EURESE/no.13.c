#include <stdio.h>

int main(){
    
    float mg, mB, fe, G, g;
    char sn;
    
    printf("Computing for the final grade of a student...\n");
    printf("Student's Name: ");
    scanf("%c",&sn);
    printf("Student's Midterm Grade: ");
    scanf("%f",&mg);
    printf("Student's Minor B: ");
    scanf("%f",&mB);
    printf("Student's Final Exam: ");
    scanf("%f",&fe);
    
    G = 0.30*mg + 0.10*mB + 0.60*fe;
    
       if(98<=G && G<=100){
        g = 4.00;
    }else if(95<=G && G<=97){
        g = 3.75;
    }else if(92<=G && G<=94){
        g = 3.50;
    }else if(89<=G && G<=91){
        g = 3.25;
    }else if(86<=G && G<=88){
        g = 3.00;
    }else if(83<=G && G<=85){
        g = 2.75;
    }else if(80<=G && G<=82){
        g = 2.50;
    }else if(77<=G && G<=79){
        g = 2.25;
    }else if(74<=G && G<=76){
        g = 2.00;
    }else if(71<=G && G<=73){
        g = 1.75;
    }else if(68<=G && G<=70){
        g = 1.50;
    }else if(64<=G && G<=67){
        g = 1.25;
    }else if(60<=G && G<=63){
        g = 1.00;
    }else{
        g = 0.00;
    }
        
        printf("Final grade is %.2f (%.2f)",G,g);
        
        return 0;

}