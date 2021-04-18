//pass array to function 1
#include<stdio.h>

void printArray(int array[] , int length)
{
printf("array size is %d",length);
int i =0;
while(i < length)
{
printf("\n%d",array[i]);
i++;
}
}



int main()
{
int size , i;
printf("enter size of array: ");
scanf("%d",&size);
//get array from user
int arr[size];
i = 0;
while(i<size)
{
printf("Enter element : ");
scanf("%d",&arr[i]);
i++;
}

printArray( arr , size );//parameter


return 0;
}

