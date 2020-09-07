#include<stdio.h>

#pragma startup fun_1
#pragma end fun_2

void fun_1()
{
	printf("This function will be called before main function\n");
}


void fun_2()
{
	printf("This function will be called after main function\n");
}


int main()
{
	int num_1 = 0;

	printf("In main function\n");

}
