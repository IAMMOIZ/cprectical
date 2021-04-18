//find second minimum in array
#include<stdio.h>
int main()
{
    int size ,max;
    //get size of array
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size],i=0,min,secondmin;
    //get array elements from user
    while(i<size)
    {
        printf("Enter element : ");
        scanf("%d",&arr[i]);
        i++;
    }
    //find first minimum of array
    i = 1;
    max = arr[0];
    min = arr[0];
    while(i<size)
    {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
        i++;
    }
    printf("first minimum is %d\n",min);
    //find second minimun element
    secondmin = max;
    i = 0;
    while(i < size)
    {
        if(arr[i] < secondmin && arr[i] != min)
            secondmin = arr[i];
        i++;
    }
    printf("second minimun is %d",secondmin);
    return 0;
}