//average of two numbers
#include<stdio.h>
int main()
{
    float first , second ,avg;
    printf("enter first number : ");
    scanf("%f", &first);
    printf("enter second number : ");
    scanf("%f", &second);
    avg = ( first + second ) / 2;
    printf("average is %f",avg);
    return 0;
}