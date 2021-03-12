//program to display even numbers in an array
#include<stdio.h>
int main()
{
int size , i ;
printf("Enter size of array : ");
scanf("%d",&size);
int arr[size];
//get elements from user
i = 0;
while(i<size)
{
printf("Enter new element : ");
scanf("%d",&arr[i]);
i++;
}
//print only array even elements
i = 0;
while(i<size)
{
if(arr[i] % 2 == 0)
{
printf("Even element is %d\n",arr[i]);
}
i++;
}

return 0;
}