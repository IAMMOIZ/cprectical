//get a number from user and check it is positive or negative
#include<stdio.h>
int main()
{
int num;
printf("Enter a number : ");
scanf("%d" , &num);

if(num < 0 )
{
printf("number is negative");
}
else
{
printf("number is positive");
}

return 0;
}