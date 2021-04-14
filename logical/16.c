//program to accept a number and print the reverse
#include<stdio.h>
int main()
{
int num , temp ,reverse=0 , rem ;
printf("Enter a number : ");
scanf("%d",&num);
temp = num;
while(temp<=0)
{
rem = temp % 10;
reverse = (reverse * 10 ) + rem;
temp = temp / 10;
}
printf("reverse number is %d",reverse);
return 0;
}