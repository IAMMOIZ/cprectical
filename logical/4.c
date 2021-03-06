//print all the even and odd number in in 1 to n range
#include<stdio.h>
int main()
{
int start , end ;
start = 1;

printf("Enter end of the range : ");
scanf("%d",&end);

while(start <= end)
{
if(start % 2 == 0)
{
printf("%d is even number\n",start);
}
else
{
printf("%d is odd number\n",start);
}
start++;
}
return 0;
}