#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
unsigned int n=sizeof(arr)/sizeof arr[0];
printf("sizeof arr is %d\n",n);
fun(arr,n);
return 0;
}
void fun(int *arr,unsigned int n)
{
//unsigned int n=sizeof(arr)/sizeof arr[0];
printf("sizeof arr inside fun is %ld\n",n);
}
