//program to add two numbers using pointer
//only in c and c++
#include<stdio.h>
int main()
{
    int a , b , sum;
    int *p1 , *p2;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;
    printf("sum using pointer for %d and %d is %d",a , b , sum);
    return 0;
}