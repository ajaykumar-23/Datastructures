#include<stdio.h>
int main()
{
int i,res=0;
int arr[11];
printf("enter array elements\n");
for(i=0;i<11;i++)
scanf("%d",&arr[i]);
for(i=0;i<11;i++)
printf("array elements are %d\n",arr[i]);
for(i=0;i<11;i++)
res=res^arr[i];
printf("%d\n",res);
return 0;
}
