//left shift by one
#include<stdio.h>
int main()
{
int arr[10],i,size;
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
//left shifting logic
i = 0;
while(i < size-1)
{
arr[i] = arr[i+1];
i++;
}
//print array
i = 0;
while(i < size)
{
printf("%d\n",arr[i]);
i++;
}
return 0;
}