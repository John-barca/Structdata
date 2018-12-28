#pragma once
#ifndef _SLNODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int DataType;

typedef struct Node
{
	DataType value;
	struct Node* next;
}Node,*pNode;

void InitList(pNode* pHead);//��ʼ��
pNode BuyNode(DataType value);//����ڵ�
void Pushback(pNode* pHead, DataType value);//β��
void Popback(pNode* pHead);//βɾ
void Pushfront(pNode *pHead, DataType value);//ͷ��
void Popfront(pNode *pHead, DataType value);//ͷɾ
pNode Find(pNode *pHead, DataType value);//����
void Destroy(pNode* pHead);//����
int Empty(pNode pHead);//�ж��Ƿ�Ϊ������
int Size(pNode pHead);//�����н�����
void PrintList(pNode* pHead);//��ӡ����
void Insert(pNode pos, DataType value);//��value�������



#endif // !_SLNODE_H
