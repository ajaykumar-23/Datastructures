#include<stdio.h>

int main()
{
	int iNum = 1234;
	int *ptr = &iNum;
	int **pptr = &ptr;


	printf("The address of iNum is = %u\n", &iNum ); 
	printf("The address of iNum using pointer %u\n", ptr ); 

	/*
	 * as pointer ptr is holding the address of variable iNum
	 * so while using pointer to pointer we have the address of "ptr".
	 * But to get the value stored inside pointer ptr, we shall access with *ptr
	 */
	printf("The address of iNum using pointer to pointer %u\n", *pptr ); 

	printf("===============================================\n"); 

	printf("The value of iNum is = %d\n", iNum ); 
	printf("The value of iNum using pointer is = %d\n", *ptr ); 
	printf("The value of iNum using pointer to pointer is =	 %d\n", **pptr ); 


	return 0;
}
