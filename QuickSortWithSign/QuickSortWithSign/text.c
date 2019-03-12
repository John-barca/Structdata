#include <stdio.h>
#include <stdlib.h>


void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void PrintArray(int array[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}


//前后下标
int Partition_3(int array[], int left, int right)
{
	int d = left;
	for (int i = left; i < right; i++)
	{
		if (array[i] < array[right])
		{
			Swap(array + d, array + i);
			d++;
		}
	}
	Swap(array + d, array + right);
	return d;
	
}



void _QuickSort(int array[], int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int div = Partition_3(array, left, right);
	_QuickSort(array, left, div - 1);
	_QuickSort(array, div + 1, right);

}

void QuickSort(int array[], int size)
{
	_QuickSort(array, 0, size - 1);
}

void TextSort()
{
	int array[] = { 7,6,8,9,2,4,3 };
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