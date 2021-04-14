//add n numbers without array
#include<stdio.h>
int main()
{
    int num , sum = 0 , n = 1 , temp;
    printf("how many number you want to enter : ");
    scanf("%d",&num);
    while( n <= num)
    {
        printf("Enter a number : ");
        scanf("%d",&temp);
        sum += temp;
        n++;
    }
    printf("total is %d",sum);
    return 0;
}