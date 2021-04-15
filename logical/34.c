//program to swap two numbers using pointer
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
    printf("first : %d, second : %d",a , b);
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("\nfirst : %d, second : %d",a , b);
    return 0;
}