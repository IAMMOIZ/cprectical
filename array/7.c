//insert new element at specific index of array
#include<stdio.h>
int main()
{
int arr[10],i,size,temp,index,newElement;
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

//get position of new element
printf("Enter index : ");
scanf("%d",&index);
//printf("Enter position : ");
//scanf("%d",&index);
//index--;
//get element from the user
printf("Enter element : ");
scanf("%d",&newElement);
//increase size of array
size++;
//right shifting logic
i = size-1;
while(i >= index )
{
arr[i] =arr[i-1];
i--;
}
arr[index] = newElement; 
//print array
i=0;
while(i < size)
{
printf("%d\n",arr[i]);
i++;
}

return 0;
}

//point to be noted 
//increament in size
//right shift from rear end of array