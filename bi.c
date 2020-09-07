#include<stdio.h>

void binary_Search(int *array, int len, int key)
{

	int i = 0;

	int min_index = 0;
	int max_index = len-1;

	while(min_index <= max_index) 
	{
		// calculate the mid index
		int mid = (min_index + max_index) / 2;
		printf("mid = %d\n",array[mid] );
		// check if we get the key
		if(array[mid] == key) 
		{
			printf("Key has been found\n");
			return; 
		}

		// traverse in the right side
		else if(array[mid] < key) 
		{
			min_index = mid + 1;
		}
		// traverse in the left side
		else 
		{
			max_index = mid - 1;
		}
	}

	printf("Not able to find key\n");

}

int main()
{
	int arr[5] = {10, 30, 45, 48, 78};

	int arrayLen = 5;

	int key = 45;

	int key_2 = 34;

//successful search
//	binary_Search(arr,arrayLen, key);

//key not found case
	binary_Search(arr,arrayLen, key_2);

return 0;
}
