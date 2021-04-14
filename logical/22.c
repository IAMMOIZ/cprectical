//add n numbers using array
#include<stdio.h>
int main()
{
    int sum , size , index = 0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    //get array elements from user
    while(index < size)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[index]);
        index++;
    }
    //calculate the sum of array
    sum = 0;
    index = 0;
    while(index < size)
    {
        sum += arr[index];
        index++;
    }

    printf("sum of array elements is %d",sum);


}