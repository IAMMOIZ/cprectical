//Number of even and odd elements in an array
#include<stdio.h>
int main()
{
int size , i;
printf("Enter size of array : ");
scanf("%d",&size);
int arr[size];
i=0;
while(i<size)
{
printf("enter element of array : ");
scanf("%d",&arr[i]);
i++;
}
//printf
int evenCount , oddCount;
evenCount = oddCount = 0;
i=0;
while(i<size)
{
if(arr[i] % 2 == 0)
{
evenCount++;
}else{
oddCount++;
}
i++;
}

printf("number of even count is %d and odd count is %d ",evenCount , oddCount);
return 0;
}