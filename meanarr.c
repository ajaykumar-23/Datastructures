#include<stdio.h>
int mean(int a[],int n);
int main()
{
int m;
int a[]={1,2,3,4,5,6,7,8};
int n=sizeof(a)/sizeof(a[0]);
m=mean(a,n);
printf("Mean of arr is %d\n",m);
return 0;
}
int mean(int a[],int n)
{
int i;
int sum=0;
for(i=0;i<n;i++)
sum=sum+a[i];
return (int)sum/(int)n;
}
