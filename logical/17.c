//program to accept a number and print sum of its digit
#include<stdio.h>
int main()
{
    int num , rem , sum = 0 , temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    while(num != 0)
    {
        rem = num % 10;
        sum += rem;
        num =  num / 10;
    }
    printf("Sum of %d is %d",temp,sum);
    return 0;
}