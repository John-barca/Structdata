#pragma once
#ifndef _SEQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int Datatype;
#define N 10

typedef struct Seqlist {
	Datatype a[N];
	int size;
}Seqlist,*pSeqlist;

void SeqlistInit(pSeqlist s);//��ʼ��˳���
int FindSeqlist(pSeqlist s, Datatype value);//����
void SeqlistPushback(pSeqlist s, Datatype value);//β��
void SeqlistPushfront(pSeqlist s, Datatype value);//ͷ��
void SeqlistPopback(pSeqlist s);//βɾ
void SeqlistPopfront(pSeqlist s);//ͷɾ
void PrintSeqlist(pSeqlist s);//��ӡ˳���
void InsertSeqlist(pSeqlist s, int x, Datatype y);//˳������
void SeqlistSort(pSeqlist s);//˳�������
void RemoveAll(pSeqlist s);//���˳���




#endif // !_SEQLIST_H
