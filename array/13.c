//program to reverse an array
#include<stdio.h>
int main()
{
int i , size , temp;
//get array from user
printf("Enter size of array : ");
scanf("%d",&size);
//get array elements from user
int arr[size];
i = 0;
while(i<size)
{
printf("Enter new element : ");
scanf("%d",&arr[i]);
i++;
}

int end = size - 1;
i = 0;
while(i < end)
{
temp =  arr[i];
arr[i] = arr[end];
arr[end] = temp;
i++;
end--;
}
//print reverse array
i = 0;
while(i < size)
{
printf("%d",arr[i]);
i++;
}
return 0;
}