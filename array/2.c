//get size of array from user and take elements from user into array and print it
#include<stdio.h>
int main()
{
int size,i;
//get size of array
printf("Enter size of array : ");
scanf("%d",&size);
//get array elements from user
i = 0;
int arr[size];
while(i<size)
{
printf("Enter a number : ");
scanf("%d",&arr[i]);
i++;
}


//print all array elements
i = 0;
while(i < size )
{
printf("number on index %d is %d\n",i,arr[i]);
i++;
}

return 0;
}