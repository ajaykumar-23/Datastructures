#include<stdio.h>
#define mysizeof(type) (char*)(&type+1)-(char*)(&type)
int main()
{
int x;
printf("%ld\n",mysizeof(x));
return 0;
}
