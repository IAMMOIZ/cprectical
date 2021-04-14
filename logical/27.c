//average of n numbers with array
#include<stdio.h>
int main()
{
    int size , i = 0;
    float avg = 0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    float arr[size];
    while( i < size)
    {
        printf("Enter a number : ");
        scanf("%f",&arr[i]);
        i++;
    }
    //calculate the sum
    i = 0;
    float sum;
    while( i < size)
        sum += arr[i++];

    
    avg = sum / size;
    printf("avg is %f",avg);
    return avg;
}