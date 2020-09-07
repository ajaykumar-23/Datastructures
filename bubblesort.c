#include<stdio.h>
int main()
{
	int i,j,arr[5],n=5,temp;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	printf("bubble sorted elements are....\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
