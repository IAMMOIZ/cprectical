//lcm[least common multiple] of two number
#include<stdio.h>
int main()
{
    int first , second , lcm , max;
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    max = first > second ? first : second;
    while(max <= first * second)
    {
        if(max % first ==0 && max % second == 0)
        {
            lcm = max;
            break;
        }
        max += max;
    }
    printf("least common multiple is : %d",lcm);
    return 0;
}