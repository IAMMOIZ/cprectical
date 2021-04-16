//program to print sum of factorial series.
#include<stdio.h>
int main()
{
    int end , i = 1 , sum , j , fact;
    printf("Enter a number : ");
    scanf("%d",&end);
    sum = 0;
    while(i <= end)
    {
        j = 1;
        fact = 1;
        while(j <= i)
        {
            fact = fact * j;
            // printf("fact is %d,%d\n",j,fact);
            j++;
        }
        sum += fact;
        i++;
    }
    printf("sum of factorial until %d is %d",end,sum);
    return 0;
}