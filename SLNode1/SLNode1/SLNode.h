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

void InitList(pNode* pHead);//初始化
pNode BuyNode(DataType value);//申请节点
void Pushback(pNode* pHead, DataType value);//尾插
void Popback(pNode* pHead);//尾删
void Pushfront(pNode *pHead, DataType value);//头插
void Popfront(pNode *pHead, DataType value);//头删
pNode Find(pNode *pHead, DataType value);//查找
void Destroy(pNode* pHead);//销毁
int Empty(pNode pHead);//判断是否为空链表
int Size(pNode pHead);//链表中结点个数
void PrintList(pNode* pHead);//打印链表
void Insert(pNode pos, DataType value);//在value后插入结点



#endif // !_SLNODE_H
