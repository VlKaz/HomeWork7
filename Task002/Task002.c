#include <stdio.h>
enum {SIZE = 5};

void EnterArr(int arr[], int size)
{
	printf("Enter array: \n");
	for(int i = 0; i < size;i++)
		scanf("%d",&arr[i]);
}

int MinNumb(int arr[],int size)
{
	int min = arr[0];
	for(int i = 0;i < size; i++)
		if (min > arr[i]) 
			min = arr[i];
	return min;
}

int main(int argc, char **argv)
{
	int arr[SIZE];
	EnterArr(arr, SIZE);
	printf("%d", MinNumb(arr,SIZE));
	return 0;
}
