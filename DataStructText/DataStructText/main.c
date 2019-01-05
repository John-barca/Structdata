#include <stdio.h>
#include <stdlib.h>


˳����ͷ��
struct Vector {
	int array[100];
	int size;
};

//void VectorPushFront(struct Vector *vector, int val)
//{
//	assert(vector != NULL);
//	if (vector->size >= 100)
//	{
//		printf("����!!\n");
//		return;
//	}
//	int i;
//	for (i = vector->size - 1; i >= 0; i--)
//	{
//		vector->array[i+1] = vector->array[i];
//	}
//	vector->array[0] = val;
//	vector->size++;
//}

//2.������ͷ����ѭ������βɾ
struct ListNode {
	int val;
	struct ListNode *next;
};

struct List {
	struct ListNode *head;
};

void ListPopBack(struct List *list)
{
	assert(list != NULL);
	if (list->head->next == NULL)
	{
		list->head = NULL;
		return;
	}

	struct ListNode *cur = list->head;
	struct ListNode *pre = NULL;
	while (cur->next != NULL)
	{
		pre = cur;
		cur = cur->next;
	}
	pre->next = NULL;
	free(cur);
}

//3.ɾ�����������val��ֵ
void ListRemoveAll(struct List *list, int val)
{
	struct ListNode *cur1, *cur2;
	cur1 = list->head;
	while (cur1->next != NULL)
	{
		if (cur1->next->val == val)
		{
			cur2 = cur1->next;
			cur1->next = cur1->next->next;
			free(cur2);
		}
		else
		{
			cur1 = cur1->next;
		}
	}
}

//4.ð������
void BubbleSort(int array[], int size)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < size - 1; i++)
	{
		int tmp = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

//5.��������ĸ���
struct RListNode {
	int val;
	struct RListNode *random;
	struct RListNode *next;
};

struct RListNode *RListCopy(struct RListNode *head)
{

}