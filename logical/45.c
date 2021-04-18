//hcf[higest common factor] or gcd [ greatest common devisor] of two number
#include<stdio.h>
int main()
{
    int first , second , hcf , min;
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    min = first < second ? first : second;
    while(min > 0)
    {
        if(first % min == 0  && second % min == 0)
        {
            hcf = min;
            break;
        }
        min--;
    }
    printf("highest common factor is : %d",hcf);
    return 0;
}