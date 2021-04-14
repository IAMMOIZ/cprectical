//add n numbers using array (shorthand logic)
#include<stdio.h>
int main()
{
    int sum , size , index = 0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    //get array elements from user and place in array then add sum
    sum = 0;
    while(index < size)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[index]);
        sum += arr[index];
        index++;
    }
    

    printf("sum of array elements is %d",sum);


}