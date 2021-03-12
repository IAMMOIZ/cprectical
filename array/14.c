//program find average of array.
#include<stdio.h>
int main()
{
int size , i ;
printf("Enter size of array : ");
scanf("%d",&size);
float arr[size],sum;
//get elements from user
i=0;
while(i<size)
{
printf("Enter new element : ");
scanf("%f",&arr[i]);
i++;
}
//find sum of array
i=0;
sum =0;
while(i<size)
{
sum = sum + arr[i];
i++;
}
float avg = sum / size;
printf("sum is %f",avg);
return 0;
}