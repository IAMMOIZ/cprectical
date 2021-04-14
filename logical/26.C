//average of n numbers without array
#include<stdio.h>
int main()
{
    int n , i = 0;
    float avg = 0, num;
    printf("Enter number of numbers to find average : ");
    scanf("%d",&n);
    while( i < n)
    {
        printf("Enter a number : ");
        scanf("%f",&num);
        avg = (avg + num) / 2;
        i++;
    }
    printf("avg is %f",avg);
}