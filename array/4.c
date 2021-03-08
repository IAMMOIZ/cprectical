//right shift by one
#include<stdio.h>
int main()
{
int arr[10],i,size,temp;
printf("Enter size of array : ");
scanf("%d",&size);
//get array from user
i = 0;
while(i<size)
{
printf("Enter array element : ");
scanf("%d",&arr[i]);
i++;
}
//right shifting logic
i = size-1;
while(i > 0)
{
arr[i] = arr[i-1];
i--;
}
//print array

while(i < size)
{
printf("%d",arr[i]);
i++;
}
return 0;
}