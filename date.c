#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("Date is %s \n",__DATE__ );
	printf("Time is %s \n",__TIME__ );
	printf("Line is %d \n",__LINE__ );
	printf("File is %s \n",__FILE__ );
	printf("Function is %s \n",__func__ );

	return 0;
}
