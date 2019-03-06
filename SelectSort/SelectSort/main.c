//—°‘Ò≈≈–Ú

#include <stdio.h>
#include <stdlib.h>

void SelectSort(int array[], int size)
{
	int i, j, min;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[i] > array[min])
		{
			int temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}

	}
}

void PrintArray(int array[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}

int main()
{
	int array[] = { 5,1,2,8,3,4,9,6,7,0 };
	int size = sizeof(array) / sizeof(array[0]);
	PrintArray(array, size);
	SelectSort(array, size);
	PrintArray(array, size);
	system("pause");
	return 0;
}