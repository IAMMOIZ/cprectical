//program to find square and cube root
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    float result;
    printf("Enter a number : ");
    scanf("%d",&num);
    result = cbrt(num);
    printf("cube root is : %f",result);
    return 0;
}