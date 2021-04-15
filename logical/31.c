//program to print sum of n prime numbers
#include<stdio.h>
int main()
{
    int end , start , sum , devider , flag;
    printf("Enter end of range : ");
    scanf("%d",&end);
    start = 2;
    sum = start;
    start++;
    while(start <= end)
    {
        devider = 2;
        flag = 0;
        while(devider < start)
        {
            if( start % devider == 0)
            {
                flag = 1;
                break;
            }
            devider++;
        }


        if(flag == 0)
        {
            sum += start;
        }

        start++;
    }
    printf("sum of this is %d",sum);
    return 0;
}