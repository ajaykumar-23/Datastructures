#include<stdio.h>
void insertionsort(int arr[],int n);
int main()
{
	int i,arr[5],n=5;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	insertionsort(arr,n);
	printf("after sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
void insertionsort(int arr[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
