//Check if two arrays are the same or not
#include<stdio.h>
int main()
{
int i, j , size1 , size2 , flag ;
printf("Enter size : ");
scanf("%d",&size1);
//get elements from user
int arr1[size1];
i = 0;
while(i<size1)
{
printf("Enter element : ");
scanf("%d",&arr1[i]);
i++;
}
printf("Enter second array size : ");
scanf("%d",&size2);
//get elements from user
int arr2[size2];
j = 0;
while(j<size2)
{
printf("Enter element : ");
scanf("%d",&arr2[j]);
j++;
}
//calculation
flag = 0;
if(size1 != size2)
{
flag=1;
}
else
{
i=0;
while(i<size1)
{
if(arr1[i] != arr2[i])
{
flag=1;
break;
}
i++;
}
}


//print result on basis of flag variable
if(flag == 0)
{
printf("array are same");
}
else
{
printf("array are not same");
}
return 0;
}