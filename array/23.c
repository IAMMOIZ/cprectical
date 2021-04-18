//find second maximum in array
#include<stdio.h>
int main()
{
    int size ,max;
    //get size of array
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size],i=0,min,secondmax;
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
    printf("first maximum is %d\n",max);
    //find second minimun element
    secondmax = min;
    i = 0;
    while(i < size)
    {
        if(arr[i] > secondmax && arr[i] != max)
            secondmax = arr[i];
        i++;
    }
    printf("second maximum is %d",secondmax);
    return 0;
}