#include "SLNode.h"

void InitList(pNode* pHead)//初始化
{
	assert(pHead);
	*pHead = NULL;
}

pNode BuyNode(DataType value)//申请节点
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

void Pushback(pNode* pHead, DataType value)//尾插
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

void Popback(pNode* pHead)//尾删
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

void Pushfront(pNode *pHead, DataType value)//头插
{
	assert(pHead);
	pNode preNode = NULL;
	pNode Node = BuyNode(value);
	preNode = *pHead;
	Node->next = preNode;
	*pHead = Node;
}

void Popfront(pNode *pHead, DataType value)//头删
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

pNode Find(pNode *pHead, DataType value)//查找
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

void Destroy(pNode* pHead)//销毁
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

int Empty(pNode pHead)//判断是否为空链表
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

int Size(pNode pHead)//链表中结点个数
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

void PrintList(pNode* pHead)//打印链表
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

void Insert(pNode pos, DataType value)//在value后插入结点
{
	pNode newNode = BuyNode(value);
	pNode preNode = pos;
	newNode->next = preNode->next;
	preNode->next = newNode;
}


