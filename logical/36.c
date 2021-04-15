//program to add first and last digit of the number
#include<stdio.h>
int main()
{
    int num , last , rem ,temp; 
    printf("Enter a number : ");
    scanf("%d",&num);
    last = num % 10 ;
    temp = num;
    while(temp >= 10)
    {
        temp = temp / 10;
    }
    printf("first digit is : %d , last digit is : %d , sum of first and last is %d",temp,last,temp+last);
    return 0;
}