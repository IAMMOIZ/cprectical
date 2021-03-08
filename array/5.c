//insert new element at start of array
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

//right shift logic from first index
i = size - 1;
while(i > 0)
{
arr[i] = arr[i-1];
i--;
}
//assing value at first index
printf("Enter elements at first index : ");
scanf("%d",&arr[0]);
//print array elements
i=0;
while(i < size)
{
printf("%d\n",arr[i]);
i++;
}

return 0;
}