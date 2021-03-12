//searching logic 1
//find an element in array and print it found or not , if found then print index or position of the element
#include<stdio.h>
int main()
{
int size, i , found , element;
printf("enter size of array : ");
scanf("%d",&size);
//get all array elements
int arr[size];
i = 0;
while(i < size)
{
printf("Enter new element : ");
scanf("%d",&arr[i]);
i++;
}
//get element from user to search
printf("Enter element to search : ");
scanf("%d",&element);
//searching logic
i = 0;
found = 0;
while(i < size)
{
if(arr[i] == element)
{
found = 1;
break;
}
i++;
}

if(found == 1)
{
printf("%d found at index %d",element , i);
printf("%d found at position %d",element , i+1);
}
else
{
printf("element not found");
}

return 0;
}