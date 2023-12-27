#include <stdio.h>
enum {SIZE = 10};

void EnterArr(int arr[], int size)
{
	printf("Enter array: \n");
	for(int i = 0; i < size;i++)
		scanf("%d",&arr[i]);
}

void SortArr(int arr[],int size)
{
	int temp;
	for(int i = 0; i < size-1 ;i++)
		{
			for (int j = i+1; j < size; j++)
				{
					if(arr[i]%10 > arr[j]%10)
					{
						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
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
	SortArr(arr,SIZE);
	PrintArr(arr,SIZE);
	
	return 0;
}
