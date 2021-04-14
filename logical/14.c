//program to print number from 1 to n using while loop
#include<stdio.h>
int main()
{
int i , n;
printf("Enter endpoint : ");
scanf("%d",&n);
i=0;
while(i<n)
{
printf("%d\n");
i++;
}
return 0;
}