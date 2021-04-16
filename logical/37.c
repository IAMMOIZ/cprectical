//program to calculate the sum of even numbers from 1 to n
#include<stdio.h>
int main()
{
    int sum , start ,  end;
    printf("Enter end of the range : ");
    scanf("%d",&end);
    sum = 0;
    start = 1;
    while(start <= end)
    {
        if(start % 2 == 0)
        {
            sum = sum + start;
        }
        start++;
    }
    printf("sum of all the even numbers between range 0 to %d is %d",end , sum);
    return 0;
}