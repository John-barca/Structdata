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

void SeqlistInit(pSeqlist s);//≥ı ºªØÀ≥–Ú±Ì
int FindSeqlist(pSeqlist s, Datatype value);//≤È’“
void SeqlistPushback(pSeqlist s, Datatype value);//Œ≤≤Â
void SeqlistPushfront(pSeqlist s, Datatype value);//Õ∑≤Â
void SeqlistPopback(pSeqlist s);//Œ≤…æ
void SeqlistPopfront(pSeqlist s);//Õ∑…æ
void PrintSeqlist(pSeqlist s);//¥Ú”°À≥–Ú±Ì
void InsertSeqlist(pSeqlist s, int x, Datatype y);//À≥–Ú±Ì≤Â»Î
void SeqlistSort(pSeqlist s);//À≥–Ú±Ì≈≈–Ú
void RemoveAll(pSeqlist s);//«Âø’À≥–Ú±Ì




#endif // !_SEQLIST_H
