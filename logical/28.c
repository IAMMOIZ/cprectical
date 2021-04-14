//program to caluclate square of 1 to n numbers
#include<stdio.h>
int main()
{
    int i , n , num;
    printf("Enter number of numbers you want to calculate square : ");
    scanf("%d",&n);
    //get number and calculate the square and print
    i = 0;
    while(i < n)
    {
        printf("Enter number : ");
        scanf("%d",&num);
        //calculate and print square
        printf("Square of %d is %d\n", num , num*num);
        i++;
    }
    return 0;
}