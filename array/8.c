//delete an element from start of array
#include<stdio.h>
int main()
{
int size,i;
//get size of array
printf("Enter size of array : ");
scanf("%d",&size);
//get elements into array
int arr[size];
i = 0;
while(i<size)
{
printf("Enter new element : ");
scanf("%d",&arr[i]);
i++;
}
//left shift by one in array from start
//decrement the size of array
i = 0;
while(i < size-1)
{
arr[i] = arr[i+1];
i++;
}
size--;
//print array 
printf("array -----\n");
i = 0;
while(i < size)
{
printf("%d\n",arr[i]);
i++;
}
return 0;
}