//program to calculate power of a number
#include<stdio.h>
int main()
{
    int num , pow , i ,result ;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter power : ");
    scanf("%d",&pow);
    i = 1;
    result = 1;
    while(i <= pow)
    {
        result *= num;
        i++;
    }
    printf("%d power of %d is %d",pow , num , result);
    return 0;
}