#pragma once
#ifndef _SEQQUEUE_H_
#define _SEQQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <malloc.h>

typedef struct QNode {
	int val;
	struct QNode *next;
}QNode,*QueuePtr;

typedef struct Queue {
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;
//初始化
LinkQueue *initQueue(LinkQueue *Q)
{
	Q->front = Q->rear = (QueuePtr*)malloc(sizeof(QNode));
	if (Q->front == NULL)
	{
		printf("Error!!!!");
		return;
	}
	Q->front->next = NULL;
	return Q;
}
//销毁
void DestroyQueue(LinkQueue *Q)
{
	while (Q->front)
	{
		Q->rear = Q->front->next;
		free(Q->front);
		Q->front = Q->rear;
	}
}
//清空
LinkQueue *ClearQueue(LinkQueue *Q)
{
	QueuePtr p = Q->front->next;
	while (p) {
		Q->front->next = p->next;
		free(p);
		p = Q->front->next;
	}
	Q->front = Q->rear;
}

//判断是否为空
int IsEmpty(LinkQueue *Q)
{
	assert(Q->front != NULL && Q->rear != NULL);
	if (Q->front == Q->rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

















#endif // !_SEQQUEUE_H_
