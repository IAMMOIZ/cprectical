//program to accept value of radius and print area of circle
#include<stdio.h>
int main()
{
int radius;
printf("Enter radious : ");
scanf("%d",&radius);
int area = 2 * 3.14 * radius;
printf("area of circle is %d",area);
return 0;
}