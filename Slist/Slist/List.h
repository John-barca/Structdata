#pragma once
#ifndef _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define LIST_CAP 9

typedef struct Seqlist
{
	int *array;
	int capacity;
	int size;
}Seqlist;

//����˳���
Seqlist CreateList();
//��ʼ��˳���
void InitList(Seqlist* Sq);
//ͷ��
void Slistheadp(Seqlist* Sq,int value);


#endif // !_LIST_H
