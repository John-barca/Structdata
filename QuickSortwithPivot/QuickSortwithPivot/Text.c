#include <stdio.h>
#include <stdlib.h>

void PrintArray(int array[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}


//ÍÚ¿Ó·¨
int Partition_2(int array[], int left, int right)
{
	int begin = left, end = right;
	int pivot = array[right];//»ù×¼Öµ

	while (begin < end)
	{
		while (begin < end&&array[begin] <= pivot)
		{
			begin++;
		}

		//ÓÒ²à¿Ó
		array[end] = array[begin];
		while (begin < end&&array[end] >= pivot)
		{
			end--;
		}
		//×ó²à¿Ó
		array[begin] = array[end];

	}
	array[begin] = pivot;
	return begin;
}

void _QuickSort(int array[], int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int div = Partition_2(array, 0, right);
	_QuickSort(array, left, div - 1);
	_QuickSort(array, div+1 , right);
}

void QuickSort(int array[], int size)
{
	_QuickSort(array, 0, size - 1);
}

void TextSort()
{
	int array[] = { 4,6,3,2,1,7,8,9,1 };
	int size = sizeof(array) / sizeof(int);
	PrintArray(array, size);
	QuickSort(array, size);
	PrintArray(array, size);
}

int main()
{
	TextSort();
	system("pause");
	return 0;
}