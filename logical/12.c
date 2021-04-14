//program to accept two value from user and swap there value
#include<stdio.h>
int main()
{
int a , b;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
printf("before swapping \nfirst is %d and second is %d\n",a,b);
int temp;
temp = a;
a = b;
b = temp;
printf("after swapping \nfirst is %d and second is %d",a,b);
return 0;
}