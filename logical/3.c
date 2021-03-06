//get a number from user and check it is it even or odd number
#include<stdio.h>
int main()
{
int num;

//get a number from user
printf("Enter a number : ");
scanf("%d",&num);


if(num % 2 == 0)
{
printf("%d is even",num);
}
else
{
printf("%d is odd",num);
}

return 0;
}