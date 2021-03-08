//delete an array element from specific position
//use left shifting from index where we want to delete element
//decrease array size
#include<stdio.h>
int main()
{
int size , i , index;
printf("Enter array size : ");
scanf("%d",&size);
//get array elements from user
int arr[size];
i = 0;
while(i<size)
{
printf("Enter a element : ");
scanf("%d",&arr[i]);
i++;
}
//get index or position
//printf("Enter index to delete element : ");
//scanf("%d",&index);
//if want to get position to delete then use this code write above
printf("Enter position to delete element : ");
scanf("%d",&index);
index--;
//left shifting logic
i = index;
while(i < size-1)
{
arr[i] = arr[i+1];
i++;
}
size--;
//print array
i = 0;
while(i < size)
{
printf("%d\n",arr[i]);
i++;
}
return 0;
}