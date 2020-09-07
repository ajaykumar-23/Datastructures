#include<stdio.h>
//void binarysearch(int*,int,int);
int main()
{
	int arr[6]={5,10,20,30,40,50},found=0,key=40,n=6;
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key == arr[mid])
		{
			printf("key element is found\n");
			found=1;
			break;
		}
		else if(key<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(!found)
		printf("element not found\n");
		return 0;
}
/*int key;
printf("enter element you want to search\n");
scanf("%d",&key);
binarysearch(arr,len,key);
return 0;
}
void binarysearch(int *arr,int len,int key)

{
int min=0;
int max=len-1;
while(min<=max)
{
int mid=(min+max)/2;
printf("middle element is %d\n",arr[mid]);
if(arr[mid] == key)
{
printf("key has been found\n");
return;
}
else if(arr[mid]<key)
{
min=mid+1;
}
else
{
max=mid-1;
}
}
printf("Not able to find key\n");
}*/
