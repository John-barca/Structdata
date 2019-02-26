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

void InsertSort(int array[], int size)
{
	int i;
	for (i = 1; i < size; i++)
	{
		int k = array[i];
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (array[j] <= k)
			{
				break;
			}
			else
			{
				array[j + 1] = array[j];
			}
		}
		array[j + 1] = k;
	}
}