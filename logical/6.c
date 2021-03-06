//print all the number is prime number or composite from 1 to n
#include<stdio.h>
int main()
{
int start = 1 , end ,devider,flag;
printf("Enter end point : ");
scanf("%d",&end);

while(start <= end )
{
devider=2;
flag=0;
while(devider < start)
{
if(start % devider  == 0 )
{
flag = 1;
break;
}
devider++;
}

if(flag == 1 )
{
printf("%d is composite number\n",start);
}
else
{
printf("%d is prime number\n", start);
}


start++;
}
return 0;
}