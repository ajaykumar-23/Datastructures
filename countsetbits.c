#include<stdio.h>
int main()
{
int i=15;
printf("%d\n",setbits(i));
return 0;
}
int setbits(int n)
{
int count=0;
while(n)
{
count=count+(n&1);
n=n>>1;
}
return count;
}
