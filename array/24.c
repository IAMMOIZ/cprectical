//program to swapping array elements
#include<stdio.h>
int main()
{
    int size1 , i , temp;
    //get array size
    printf("Enter both array size (should be same size): ");
    scanf("%d",&size1);
    //get elements from user
    int arr1[size1];
    i = 0;
    while(i < size1)
    {
        printf("Enter element : ");
        scanf("%d",&arr1[i]);
        i++;
    }
    //get second array data
    printf("Enter second array elements :-----\n");
    //get elements from user
    int arr2[size1];
    i = 0;
    while(i < size1)
    {
        printf("Enter element : ");
        scanf("%d",&arr2[i]);
        i++;
    }
    //swapping logic
    i = 0;
    while(i < size1)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
        i++;
    }
    //print first array 
    printf("first array is now : \n");
    i = 0;
    while(i < size1)
    {
        printf("%d\n",arr1[i]);
        i++;
    }
    //print second array 
    printf("second array is now : \n");
    i = 0;
    while(i < size1)
    {
        printf("%d\n",arr2[i]);
        i++;
    }

    return 0;
}