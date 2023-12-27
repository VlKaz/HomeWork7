#include <stdio.h>
enum {SIZE = 12};

void EnterArr(int arr[], int size)
{
	printf("Enter array: \n");
	for(int i = 0; i < size;i++)
		scanf("%d",&arr[i]);
}

void ShiftArr(int arr[],int size, int shift)
{
	int temp;
	for(int i = 0, j = shift; j < size ;i++,j++)
			{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			}
}

void PrintArr(int arr[], int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
	printf("%d ", arr[i]);
}

int main(int argc, char **argv)
{
	int arr[SIZE];
	EnterArr(arr, SIZE);
	ShiftArr(arr,SIZE,4);
	ShiftArr(arr,SIZE,4);
	PrintArr(arr,SIZE);
	
	return 0;
}
