#include <stdio.h>
enum {SIZE = 10};

void EnterArr(int arr[], int size)
{
	printf("Enter array: \n");
	for(int i = 0; i < size;i++)
		scanf("%d",&arr[i]);
}

int SizeArr(int arr[],int size)
{
	int size_arr = 0;
	for(int i = 0; i < size ;i++)
		{
			if ((arr[i]/10)%10 == 0)
				size_arr++;
		}
		return size_arr;
}

void PrintArr(int arr[], int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
	printf("%d ", arr[i]);
}

void NewArr(int arr[],int size, int new_arr[])
{
	int j = 0;
	for (int i = 0; i < size; i++)
		{
			if ((arr[i]/10)%10 == 0)
			{
			new_arr[j] = arr[i];
			j++;
			}
		}
}

int main(int argc, char **argv)
{
	int arr[SIZE];
	EnterArr(arr, SIZE);
	int size_new_arr =  SizeArr(arr,SIZE);
	int arrB[size_new_arr];
	PrintArr(arr,SIZE);
	NewArr(arr, SIZE, arrB);
	PrintArr(arrB,size_new_arr);
	return 0;
}
