#pragma once
#include <stdio.h>

void PrintArray(int array[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}


int Partion(int array[], int left, int right)
{
	int begin = left;
	int end = right;
	while (begin < end)
	{
		//优先走左边
		while (begin < end && array[begin] <= array[right])
		{
			begin++;
		}
		//左边一定卡住了

		//走右边
		while (begin < end&&array[end] >= array[right])
		{
			end--;
		}
		//右边也卡住了

		int tmp = array[begin];
		array[begin] = array[end];
		array[end] = tmp;
	}

	//区间分成小。大，基准
	int temp = array[begin];
	array[begin] = array[right];
	array[right] = temp;
	//返回当前基准值所在位置
	return begin;
}

void _QuickSort(int array[], int left, int right)
{
	//终止条件
	//size==0||size==1
	//left==right:区间内还有一个数
	//left>right:区间内没有数
	if (left >= right)
	{
		return;
	}
	int div;//比基准值小的放基准值左边，比基准值大的放右边后，基准值所在的下标
	div = Partion(array, left, right);//遍历array,小的放左，大的放右
	_QuickSort(array, left, div - 1);//基准值左侧进行排序
	_QuickSort(array, div + 1, right);//基准值右侧进行排序
}

void QuickSort(int array[], int size)
{
	_QuickSort(array, 0, size - 1);
}


