#include "Seqlist.h"

void SeqlistInit(pSeqlist s)//顺序表初始化
{
	memset(s->a, 0, sizeof(Datatype)*N);
	s->size = 0;
}

void PrintSeqlist(pSeqlist s)//打印顺序表
{
	int i = 0;
	if (s->size == 0)
	{
		printf("顺序表为空！！\n");
		return;
	}
	for (; i < s->size; i++)
	{
		printf("%d-->", s->a[i]);
	}
	printf("\n");
	return;
}

int FindSeqlist(pSeqlist s, Datatype value)
{
	int i = 0;
	if (s->size == 0)
	{
		printf("顺序表为空！\n");
	}
	else
	{
		for (i = 0; i < s->size; i++)
		{
			if (s->a[i] == value)
			{
				return i;
			}
		}
	}
	return -1;
}

void SeqlistBubbleSort(pSeqlist s)//冒泡排序
{
	assert(s != NULL);
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < s->size - 1; i++)
	{
		for (j = 0; j < s->size - 1 - i; j++)
		{
			if (s->a[j] > s->a[j + 1])
			{
				tmp = s->a[j];
				s->a[j] = s->a[j + 1];
				s->a[j + 1] = tmp;
			}
		}
	}
}

void SeqlistPushback(pSeqlist s, Datatype value)//尾插
{
	assert(s != NULL);
	if (s->size >= N)
	{
		printf("空间不足\n");
		return;
	}
	else
	{
		s->a[s->size] = value;
		s->size++;
	}
	return;
}

void SeqlistPushfront(pSeqlist s, Datatype value)//头插
{
	assert(s != NULL);
	int i = 0;
	if (s->size >= N)
	{
		printf("空间不足\n");
		return;
	}
	else
	{
		for (i = s->size; i > 0; i--)
		{
			s->a[i] = s->a[i-1];
		}
		s->a[0] = value;
		s->size++;
	}
	return;
}

void SeqlistPopfront(pSeqlist s)//头删
{
	assert(s != NULL);
	int i = 0;
	if (s->size == 0)
	{
		printf("顺序表为空！\n");
	}
	else
	{
		for (i = 0; i < s->size - 1; i++)
		{
			s->a[i] = s->a[i + 1];
		}
		s->size--;
	}
	return;
}

void SeqlistPopback(pSeqlist s)//尾删
{
	assert(s != NULL);
	if (s->size == 0)
	{
		printf("顺序表为空！\n");
	}
	else
	{
		s->size--;
	}
}

void InsertSeqlist(pSeqlist s, int x, Datatype value)//顺序表插入
{
	assert(s != NULL);
	int i = 0;
	if (s->size >= N)
	{
		printf("空间不足\n");
		return;
	}
	if (x < 0 || x >= N)
	{
		printf("目标插入位置不存在\n");
	}
	else if (x < s->size)
	{
		for (i = s->size; i >= x; i--)
		{
			s->a[i + 1] = s->a[i];
		}
		s->a[x] = value;
		s->size++;
	}
	else
	{
		s->a[s->size] = value;
		s->size++;
	}
}

void SeqlistSort(pSeqlist s)//顺序表排序
{
	assert(s != NULL);
	if (s->size == 0)
	{
		printf("顺序表为空\n");
		return;
	}
	SeqlistBubbleSort(s);
}

void RemoveAll(pSeqlist s)//清空顺序表
{
	assert(s != NULL);
	s->size = 0;
	return;
}