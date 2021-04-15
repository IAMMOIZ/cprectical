//program to find compound interest
#include<stdio.h>
#include<math.h>
int main()
{

    float principle , rate , time , compound ;
    printf("Enter principle amount : ");
    scanf("%f",&principle);
    printf("Enter rate per year : ");
    scanf("%f",&rate);
    printf("Enter time period : ");
    scanf("%f",&time);
    //calculate compound interest
    compound = principle * pow((1 + (rate / 100)), time);
    printf("compound interest is : %f",compound);
    return 0;
}
