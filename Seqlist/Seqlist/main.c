#include "Seqlist.h"

//void SeqlistInit(pSeqlist s);//≥ı ºªØÀ≥–Ú±Ì
//int FindSeqlist(pSeqlist s, Datatype value);//≤È’“
//void SeqlistPushback(pSeqlist s, Datatype value);//Œ≤≤Â
//void SeqlistPushfront(pSeqlist s, Datatype value);//Õ∑≤Â
//void SeqlistPopback(pSeqlist s);//Œ≤…æ
//void SeqlistPopfront(pSeqlist s);//Õ∑…æ
//void PrintSeqlist(pSeqlist s);//¥Ú”°À≥–Ú±Ì
//void InsertSeqlist(pSeqlist s, int x, Datatype y);//À≥–Ú±Ì≤Â»Î
//void SeqlistSort(pSeqlist s);//À≥–Ú±Ì≈≈–Ú
//void RemoveAll(pSeqlist s);//«Âø’À≥–Ú±Ì

void text()
{
	Seqlist s;
	SeqlistInit(&s);
	SeqlistPushback(&s, 1);
	SeqlistPushback(&s, 2);
	SeqlistPushback(&s, 3);
	SeqlistPushback(&s, 4);
	SeqlistPushback(&s, 5);
	PrintSeqlist(&s);
	SeqlistPushfront(&s, 7);
	SeqlistPushfront(&s, 9);
	PrintSeqlist(&s);
	SeqlistPopback(&s);
	PrintSeqlist(&s);
	SeqlistPopfront(&s);
	PrintSeqlist(&s);
	SeqlistSort(&s);
	PrintSeqlist(&s);
}

int main()
{
	text();
	system("pause");
	return 0;
}