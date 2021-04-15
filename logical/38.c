//program to accept value of base & height and calculate area of triangle
#include<stdio.h>
#include<math.h>
int main()
{

    int height , base ,diagonal,s, area ;
    printf("Enter height of triengle : ");
    scanf("%d",&height);
    printf("Enter base of triengle : ");
    scanf("%d",&base);
    printf("Enter diagonal of triengle : ");
    scanf("%d",&diagonal);
    s = (height + base + diagonal)/2;
    area = sqrt(s * (s - height) * (s - base) * (s - diagonal ));
    printf("area of triangle is : %d",area);
    return 0;
}
