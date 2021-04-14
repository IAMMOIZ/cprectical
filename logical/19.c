//program to accept a number and print its factorial
#include<stdio.h>
int main()
{
    int num , i = 1, fact = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("factorial of number %d is  %d",num,fact);
}