//program to find area of circle using radious
#include<stdio.h>
int main()
{
    float radius , area;
    printf("Enter radius : ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("area of circle is : %0.3f",area);
    return 0;
}