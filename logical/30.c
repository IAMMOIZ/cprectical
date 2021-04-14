//program to check whether a number is pallindrome or not
#include<stdio.h>
int main()
{
    int num , reverse , rem , temp ;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    reverse = 0;
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = ( reverse * 10) + rem;
        temp /= 10;
    }
    if(reverse == num)
    {
        printf("number is pallindrom");
    }
    else
    {
        printf("number is not pallindrom");
    }
    return 0;
}