#include<stdio.h>


int T, P,a,b,c,A ,B, H;
//T= Type, B=Base, H=Height, A=area//

int main()
{
printf("TRIANGLE PERIMETER AND AREA SOLVER\n");
printf("SOLVING TYPE\n");
printf("Press 1  for perimeter\n");
printf("Press 2 for area\n");
printf("Enter type of solving: ");
scanf("%d",&T);

if (T == 1)
{
printf("Enter Side A: ");
scanf("%d",&a);
printf("Enter Side B: ");
scanf("%d",&b);
printf("Enter Side C: ");
scanf("%d",&c);
P = a + b + c;
printf("The perimeter of the area of a triangle is %d",P);
}

else if  (T == 2)
{
printf("Enter Base: ");
scanf("%d",&B);
printf("Enter Height: ");
scanf("%d",&H);
A = (B*H)/2;
printf("The area of a triangle is %d",A);
}

else
printf("!!INVALID SOLVING TYPE!!");

return 0;
}  