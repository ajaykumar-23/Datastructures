#include<stdio.h>
int main()
{
	int arr[5],i,found=0,key,n;
	int low=0,high=n-1;
	printf("enter array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("Array elements are\n");
	for(i=0;i<5;i++)
		printf("%d\n",arr[i]);
	n=sizeof(arr)/sizeof(arr[0]);
		printf("array length is %d\n",n);
	printf("enter element you want to search\n");
	scanf("%d",&key);
{
		while(low<=high)
		{
			int mid = (low+high)/2;
			if(key==arr[mid])
			{
				printf("key element is found\n");
				found=1;
				break;
			}
			else if(key < arr[mid])
				high = mid-1;
			else
				low = mid+1;
		}
}
	if(!found)
		printf("element not found\n");
	return 0;
}
