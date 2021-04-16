//program to convert centimeter to meters and kilometers
#include<stdio.h>
int main()
{
    float meter , km;
    printf("enter distance in meter : ");
    scanf("%f",&meter);
    km = meter / 1000.00;
    printf("distance : %.3f km",km);
    return 0;
}