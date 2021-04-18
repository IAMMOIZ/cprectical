//pass array to function via pointer
#include<stdio.h>

void printArray(int *p ,int size)
{
printf("array size is %d",size);
int i =0;
while(i < size)
{
printf("\n%d",p[i]);
i++;
}
}



int main()
{
int size , i;
printf("enter size of array: ");
scanf("%d",&size);
//get array from user
int arr[size];
i = 0;
while(i<size)
{
printf("Enter element : ");
scanf("%d",&arr[i]);
i++;
}

printArray( arr , size);//parameter


return 0;
}

