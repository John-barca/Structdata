#include <stdio.h>
#include <stdlib.h>

//归并排序

//合并两个有序数组
//array[left,mid),array[mid,right)

void PrintArray(int array[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}


void Merge(int array[], int left, int mid, int right,int* extra)
{
	int size = right - left;

	int left_index = left;
	int right_index = mid;
	int extra_index = 0;

	while (left_index < mid&&right_index < right)
	{
		if (array[left_index] < array[right_index])
		{
			extra[extra_index] = array[left_index];
			left_index++;
		}
		else {
			extra[extra_index] = array[right_index];
			right_index++;
		}
		extra_index++;
	}
	while (left_index < mid)
	{
		extra[extra_index++] = array[left_index++];
	}
	while (right_index < right)
	{
		extra[extra_index++] = array[right_index++];
	}

	for (int i = 0; i < size; i++)
	{
		array[left + i] = extra[i];
	}

	
}

//区间为[left,right)
//左闭右开的区间

void _MergeSort(int array[], int left, int right,int* extra)
{

	if (right == left + 1)
	{
		//区间还剩一个数
		//有序
		return;
	}
	if (left >= right)
	{
		//区间内没有数
		return;
	}

	int mid = left + (right - left) / 2;
	//区间被分成左右两个区域
	//[left,mid)
	//[mid,right)
	//先将左右两个区间进行排序,分治算法，递归解决
	_MergeSort(array, left, mid, extra);
	_MergeSort(array, mid, right, extra);

	//左右两个小区间已经有序
	//合并两个有序数组

	Merge(array, left, mid, right,extra);
}

void MergeSort(int array[], int size)
{
	int *extra = (int*)malloc(sizeof(int)*size);
	_MergeSort(array, 0, size, extra);
	free(extra);
}

void TextSort()
{
	int array[] = { 5,9,7,6,1,4,3 };
	int size = sizeof(array) / sizeof(array[0]);
	PrintArray(array, size);
	MergeSort(array, size);
	PrintArray(array, size);

}

int main()
{
	TextSort();
	
	system("pause");
	return 0;
}