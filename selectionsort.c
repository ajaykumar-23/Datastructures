#include<stdio.h>
void selectionsort(int arr[],int n);
int main()
{
	int i,arr[5],n=5;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	selectionsort(arr,n);
	printf("after sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
void selectionsort(int arr[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min]);
			{
				min=j;
			}
		}
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;

	}
}
