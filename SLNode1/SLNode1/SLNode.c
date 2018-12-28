#include "SLNode.h"

void InitList(pNode* pHead)//��ʼ��
{
	assert(pHead);
	*pHead = NULL;
}

pNode BuyNode(DataType value)//����ڵ�
{
	pNode newNode = NULL;
	newNode = (pNode)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		printf("out of memory!!\n");
		exit(1);
	}
	else
	{
		newNode->value = value;
		newNode->next = NULL;
	}
	return newNode;
}

void Pushback(pNode* pHead, DataType value)//β��
{
	assert(pHead);
	if (*pHead == NULL)
	{
		*pHead = BuyNode(value);
	}
	else
	{
		pNode cur = NULL;
		cur = *pHead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = BuyNode(value);
	}
}

void Popback(pNode* pHead)//βɾ
{
	assert(pHead);
	if (*pHead == NULL)
	{
		return;
	}
	else if ((*pHead)->next == NULL)
	{
		pNode TemNode = *pHead;
		free(TemNode);
		TemNode = NULL;
		*pHead = NULL;
	}
	else
	{
		pNode cur = *pHead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = NULL;
	}
}

void Pushfront(pNode *pHead, DataType value)//ͷ��
{
	assert(pHead);
	pNode preNode = NULL;
	pNode Node = BuyNode(value);
	preNode = *pHead;
	Node->next = preNode;
	*pHead = Node;
}

void Popfront(pNode *pHead, DataType value)//ͷɾ
{
	assert(pHead);
	pNode preNode = *pHead;
	if (*pHead == NULL)
	{
		return;
	}
	else if ((*pHead)->next == NULL)
	{
		*pHead = NULL;
	}
	else
	{
		*pHead = preNode->next;
		free(preNode);
		preNode = NULL;
	}

}

pNode Find(pNode *pHead, DataType value)//����
{
	assert(pHead);
	pNode cur = *pHead;
	while (cur)
	{
		if (cur->value == value)
		{
			break;
		}
		cur = cur->next;
	}
	return cur;
}

void Destroy(pNode* pHead)//����
{
	assert(pHead);
	pNode cur = *pHead;
	while (cur->next)
	{
		pNode Dnode = cur;
		cur = cur->next;
		free(Dnode);
		Dnode == NULL;
	}
}

int Empty(pNode pHead)//�ж��Ƿ�Ϊ������
{
	if (pHead == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int Size(pNode pHead)//�����н�����
{
	pNode node = pHead;
	DataType num = 0;
	while (node)
	{
		num++;
		node = node->next;
	}
	return num;
}

void PrintList(pNode* pHead)//��ӡ����
{
	pNode cur = *pHead;
	assert(pHead);
	while (cur)
	{
		printf("%d-->", cur->value);
		cur = cur->next;
	}
	printf("NULL\n");
}

void Insert(pNode pos, DataType value)//��value�������
{
	pNode newNode = BuyNode(value);
	pNode preNode = pos;
	newNode->next = preNode->next;
	preNode->next = newNode;
}


