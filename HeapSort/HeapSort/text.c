#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void PrintArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}

void AdjustDown(int array[], int size, int root)
{
	while (1)
	{
		assert(array != NULL);
		if (root >= size || root < 0)
		{
			return;
		}
		//�ж�root�Ƿ�ΪҶ�ӽ��
		int left = 2 * root + 1;
		if (left >= size)//��Ҷ�ӽڵ�
		{
			return;
		}
		int right = 2 * root + 2;
		int min = left;
		//�ҵ���С��һ��
		if (right < size&&array[right] < array[left]) {
			min = right;
		}
		if (array[root] <= array[min])
		{
			return;
		}

		int t = array[root];
		array[root] = array[min];
		array[min] = t;

		root = min;
	}
}

void CreateHeap(int array[], int size)
{
	for (int i = (size - 2) / 2; i >= 0; i--)
	{
		AdjustDown(array, size, i);
	}
}




int main()
{
	int array[] = { 95,87,65,91,12,18,13,14,5,4 };
	int size = sizeof(array) / sizeof(array[0]);
	PrintArray(array, size);
	AdjustDown(array, size, 0);
	PrintArray(array, size);
	CreateHeap(array, size);
	PrintArray(array, size);
	system("pause");
	return 0;
}
