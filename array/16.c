//update element in the array if found otherwise print not found
#include<stdio.h>
int main()
{
int i, size;
printf("Enter size : ");
scanf("%d",&size);
//get elements from user
int arr[size];
i = 0;
while(i<size)
{
printf("Enter element : ");
scanf("%d",&arr[i]);
i++;
}
//get element from user
int new,element;
printf("Enter element to update : ");
scanf("%d",&element);
printf("Enter new to update : ");
scanf("%d",&new);
i = 0;
int flag = 0;
while(i < size )
{
if(arr[i] == element)
{
arr[i] = new;
flag = 1;
}
i++;
}


if(flag == 1)
{
printf("updated array is --\n");
i = 0;
while(i<size)
{
printf("arr[%d] => %d\n",i,arr[i]);
i++;
}
}else{
printf("element not found");
}
return 0;
}