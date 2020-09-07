#include<stdio.h>
int main()
{
char str[10];
int countL,countU=0;
printf("enter a string\n");
scanf("%s",str);
printf("enterd stg is %s\n",str);
for(int i=0;str[i]!='\0';i++)
{
if(str[i] >= 'A' && str[i] <= 'Z')
	countU++;
else if(str[i] >= 'a' && str[i] <= 'z')
	countL++;
}
printf("Total uppercase is :%d,Lowercase is:%d\n",countU,countL);
return 0;
}

