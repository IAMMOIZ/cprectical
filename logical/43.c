//program to find perfect square
//a number which root squre is again same number
#include<stdio.h>
#include<math.h>
int main()
{
    int num; 
    float root;
    printf("Enter a number: ");
    scanf("%d",&num);
    root = sqrt(num);
    printf("root is %f\n",root);
    if(num == (root * root))
    {
        printf("number is perfect square");
    }else
    {
        printf("number is not perfect square");
    }
    return 0;
}