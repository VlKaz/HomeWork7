#include <stdio.h>
enum {SIZE = 10};

void EnterArr(int arr[], int size)
{
	printf("Enter array: \n");
	for(int i = 0; i < size;i++)
		scanf("%d",&arr[i]);
}

int RepeatNumb(int arr[],int size)
{
	int count = 1, maxRepeat = 1, repeatNumber = 0;
	for(int i = 0; i < size-1 ;i++)
		{
			for(int j = i + 1;j < size; j++)
			if(arr[i] == arr[j]) count++;
		if (maxRepeat < count)
		{
			 maxRepeat = count;
			 repeatNumber = arr[i];
		}
		count = 1;
		}
		printf("Number = %d \n", repeatNumber);
		return maxRepeat;
}

void PrintArr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	printf("%d ", arr[i]);
	printf("\n");
}


int main(int argc, char **argv)
{
	int arr[SIZE];
	EnterArr(arr, SIZE);
	PrintArr(arr,SIZE);
	printf("Max repeat: %d \n", RepeatNumb(arr, SIZE));
	return 0;
}
