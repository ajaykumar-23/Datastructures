#include<stdio.h>
int main()
{
	int arr[5],i,found=0,key;
	printf("enter array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("Array elements are\n");
	for(i=0;i<5;i++)
		printf("%d\n",arr[i]);
	printf("enter element you want to search\n");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==arr[i])
		{
			found=1;
			break;
		}
	}
	if(found == 1)
		printf("key element is found at %d location\n",i);
	else
		printf("element not found\n");
	return 0;
}
