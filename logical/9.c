//program to calculate simple interest
#include<stdio.h>
int main()
{
float p , r , t , SI;
printf("Enter ammount : ");
scanf("%f",&p);
printf("Enter rate : ");
scanf("%f",&r);
printf("Enter time : ");
scanf("%f",&t);

SI = (p * r * t) / 100;

printf("simple interest is : %f", SI);
return 0;
}