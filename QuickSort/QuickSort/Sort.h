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
		//���������
		while (begin < end && array[begin] <= array[right])
		{
			begin++;
		}
		//���һ����ס��

		//���ұ�
		while (begin < end&&array[end] >= array[right])
		{
			end--;
		}
		//�ұ�Ҳ��ס��

		int tmp = array[begin];
		array[begin] = array[end];
		array[end] = tmp;
	}

	//����ֳ�С���󣬻�׼
	int temp = array[begin];
	array[begin] = array[right];
	array[right] = temp;
	//���ص�ǰ��׼ֵ����λ��
	return begin;
}

void _QuickSort(int array[], int left, int right)
{
	//��ֹ����
	//size==0||size==1
	//left==right:�����ڻ���һ����
	//left>right:������û����
	if (left >= right)
	{
		return;
	}
	int div;//�Ȼ�׼ֵС�ķŻ�׼ֵ��ߣ��Ȼ�׼ֵ��ķ��ұߺ󣬻�׼ֵ���ڵ��±�
	div = Partion(array, left, right);//����array,С�ķ��󣬴�ķ���
	_QuickSort(array, left, div - 1);//��׼ֵ����������
	_QuickSort(array, div + 1, right);//��׼ֵ�Ҳ��������
}

void QuickSort(int array[], int size)
{
	_QuickSort(array, 0, size - 1);
}


