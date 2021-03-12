//program to find largest and smallest number in array
#include<stdio.h>
int main()
{
int size , i , max , min;
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
min = arr[0];
i = 1;
while(i < size)
{
//to find max element
if(arr[i] > max)
{
max = arr[i];
}
//to find min elements
if(arr[i] > max)
{
max = arr[i];
}
i++;
}
//print max number
printf("maximum number is : %d\n",max);
//print min number
printf("minimum number is : %d",min);
return 0;
}