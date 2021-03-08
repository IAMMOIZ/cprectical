//delete an element from end of array
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
//only decrease size in case of deleting last element
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