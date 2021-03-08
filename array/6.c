//insert new element at end of array
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

//assing value at last index
printf("Enter elements at last of array : ");
scanf("%d",&arr[size]);
//print array elements
size++;
//print array
i=0;
while(i < size)
{
printf("%d\n",arr[i]);
i++;
}

return 0;
}