#pragma once
#include <stdio.h>
#include <stdlib.h>

void PrintArray(int array[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}

//void InsertSort(int array[], int size)
//{
//	int i;
//	for (i = 1; i < size; i++)
//	{
//		int k = array[i];
//		int j;
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (array[j] <= k)
//			{
//				break;
//			}
//			else
//			{
//				array[j + 1] = array[j];
//			}
//		}
//		array[j + 1] = k;
//	}
//}

void InsertSortWithGap(int array[], int size, int gap)
{
	for (int i = gap; i < size; i++)
	{
		int k = array[i];
		int j;
		for (j = i - gap; j >= 0; j -= gap)
		{
			if (array[j] <= k)
			{
				break;
			}
			else
			{
				array[j + gap] = array[j];
			}
		}
		array[j + gap] = k;
	}
}

void ShellSort(int array[], int size)
{
	int gap = size;
	while (1)
	{
		gap = gap / 3 + 1;
		InsertSortWithGap(array, size, gap);
		if (gap == 1)
		{
			break;
		}
	}
}

void text()
{
	int array[] = { 4,7,8,6,9,1,2,5,3 };
	int size = sizeof(array) / sizeof(array[0]);
	PrintArray(array, size);
	//InsertSort(array, size);
	ShellSort(array, size);
	PrintArray(array, size);
}

int main()
{
	text();
	system("pause");
	return 0;
}