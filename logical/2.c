//get a number from user and check it positive or negative or zero
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
if(num > 0)
{
printf("number is positive");
}
else
{
printf("number is zero");
}
}

return 0;
}