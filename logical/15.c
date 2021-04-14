//program to print first n even numbers
#include<stdio.h>
int main()
{
int n, i = 0, j=2;
printf("how many even numbers you want to print : ");
scanf("%d",&n);
while(i<n)
{
printf("%d\n",j);
j+=2;
i++;
}
return 0;
}