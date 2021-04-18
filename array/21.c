#include <stdio.h>
void fun(int * arr)
{
int i;
int n = sizeof(arr)/sizeof(arr[0]);
printf("%d",n);
// for (i=0; i<n; i++)
// 	printf("%d ", arr[i]);
// }
}
// Driver program
int main()
{
int arr[10] ;
// printf("%d",);
fun(arr);
return 0;
}
//need to r&d