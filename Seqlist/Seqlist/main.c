#include "Seqlist.h"

//void SeqlistInit(pSeqlist s);//��ʼ��˳���
//int FindSeqlist(pSeqlist s, Datatype value);//����
//void SeqlistPushback(pSeqlist s, Datatype value);//β��
//void SeqlistPushfront(pSeqlist s, Datatype value);//ͷ��
//void SeqlistPopback(pSeqlist s);//βɾ
//void SeqlistPopfront(pSeqlist s);//ͷɾ
//void PrintSeqlist(pSeqlist s);//��ӡ˳���
//void InsertSeqlist(pSeqlist s, int x, Datatype y);//˳������
//void SeqlistSort(pSeqlist s);//˳�������
//void RemoveAll(pSeqlist s);//���˳���

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