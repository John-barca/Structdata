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

//创建顺序表
Seqlist CreateList();
//初始化顺序表
void InitList(Seqlist* Sq);
//头插
void Slistheadp(Seqlist* Sq,int value);


#endif // !_LIST_H
