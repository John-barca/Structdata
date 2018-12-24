#include "List.h"

Seqlist CreateList()
{
	Seqlist* list = (Seqlist*)malloc(sizeof(Seqlist));
	return *list;
}

void InitList(Seqlist* Sq)
{
	Sq->array = (int*)malloc(sizeof(int)*LIST_CAP);
	Sq->size = 0;
	Sq->capacity = LIST_CAP;
}

void Slistheadp(Seqlist* Sq,int value)
{
	assert(Sq);
	if (Sq->array[0] == 0)
	{
		Sq->array[0] = value;
	}
	else
	{
		int i = 0;
		int size = Sq->size;
		for (i = size; i > 0; i--)
		{
			Sq->array[i] = Sq->array[i - 1];
		}
		Sq->array[0] = value;
	}
}


