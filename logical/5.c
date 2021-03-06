//get a number and check it is prime number or composite
#include<stdio.h>
int main()
{
int num,devider=2,flag=0;
printf("Enter a number : ");
scanf("%d",&num);


while(devider < num)
{
if(num % devider  == 0 )
{
flag = 1;
break;
}
devider++;
}

if(flag == 1 )
{
printf("%d is composite number",num);
}
else
{
printf("%d is prime number ", num);
}
return 0;
}