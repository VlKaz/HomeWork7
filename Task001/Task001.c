#include <stdio.h>
enum {SIZE = 5};

void EnterArr(int arr[], int size)
{
	printf("Enter array: \n");
	for(int i = 0; i < size;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i] <= 0)
			{
				printf("Negativ number!!!");
				return;
			}
	}
}

float MidSum (int arr[], int size)
{
	float MSum = 0;
	for(int i = 0; i < size; i++)
		MSum +=(float) arr[i];
	return MSum/size;
}

int main(int argc, char **argv)
{
	int arr[SIZE];
	EnterArr(arr, SIZE);
	printf("%.3f", MidSum(arr,SIZE));
	return 0;
}

