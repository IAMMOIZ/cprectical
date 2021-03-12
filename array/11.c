//program to find largest number of n number
#include<stdio.h>
int main()
{
int size , i , max;
printf("Enter size of array : ");
scanf("%d",&size);
int arr[size];
//get elements from user
i = 0;
while(i < size)
{
printf("Enter a element : ");
scanf("%d",&arr[i]);
i++;
}
//find max number
max = arr[0];
i = 1;
while(i < size)
{
if(arr[i] > max)
{
max = arr[i];
}
i++;
}
//print max number
printf("maximum number is : %d",max);
return 0;
}