#include "SLNode.h"

//void InitList(pNode* pHead);//��ʼ��
//pNode BuyNode(DataType value);//����ڵ�
//void Pushback(pNode* pHead, DataType value);//β��
//void Popback(pNode* pHead);//βɾ
//void Pushfront(pNode *pHead, DataType value);//ͷ��
//void Popfront(pNode *pHead, DataType value);//ͷɾ
//pNode Find(pNode *pHead, DataType value);//����
//void Destroy(pNode* pHead);//����
//int Empty(pNode pHead);//�ж��Ƿ�Ϊ������
//int Size(pNode pHead);//�����н�����
//void PrintList(pNode* pHead);//��ӡ����
//void Insert(pNode pos, DataType value);//��value�������

void text()
{	
	Node* pHead;
	InitList(&pHead);
	pHead = BuyNode(1);
	Pushback(&pHead, 5);
	Pushback(&pHead, 7);
	PrintList(&pHead);
	Popback(&pHead);
	PrintList(&pHead);
	Pushfront(&pHead, 8);
	Pushfront(&pHead, 9);
	PrintList(&pHead);
	Popfront(&pHead, 1);
	PrintList(&pHead);



}

int main()
{
	text();
	system("pause");
	return 0;
}