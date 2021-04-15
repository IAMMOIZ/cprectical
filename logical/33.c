//program to swap two numbers without using third variable
#include<stdio.h>
int main()
{
    int first , second;
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    printf("before swapping : first : %d , second : %d\n",first , second); 
    first = first + second;
    second  = first - second;
    first = first - second;
    printf("after swapping : first : %d , second : %d",first , second); 
    return 0;
}