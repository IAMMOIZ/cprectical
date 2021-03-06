//get 10 elements from user into array and print it
#include<stdio.h>
int main()
{
int arr[10],i;
//get array elements from user
i = 0;
while(i<=9)
{
printf("Enter a number : ");
scanf("%d",&arr[i]);
i++;
}


//print all array elements
i = 0;
while(i <= 9)
{
printf("number on index %d is %d\n",i,arr[i]);
i++;
}

return 0;
}