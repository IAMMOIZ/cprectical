//program to accept two number and print largest among them
#include<stdio.h>
int main()
{
int a, b;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
if(a>b)
{
printf("%d is greater then %d",a,b);
}
else
{
printf("%d is greater then %d",b,a);
}
return 0;
}