#include <stdio.h>
#include <stdlib.h>
#include"Sort.h"

int main()
{
	int array[] = { 9,8,5,6,4,1,7 };
	int size = sizeof(array) / sizeof(array[0]);
	PrintArray(array, size);
	QuickSort(array, size);
	PrintArray(array, size);
	system("pause");
	return 0;
}