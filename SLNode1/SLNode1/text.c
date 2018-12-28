#include "SLNode.h"

//void InitList(pNode* pHead);//初始化
//pNode BuyNode(DataType value);//申请节点
//void Pushback(pNode* pHead, DataType value);//尾插
//void Popback(pNode* pHead);//尾删
//void Pushfront(pNode *pHead, DataType value);//头插
//void Popfront(pNode *pHead, DataType value);//头删
//pNode Find(pNode *pHead, DataType value);//查找
//void Destroy(pNode* pHead);//销毁
//int Empty(pNode pHead);//判断是否为空链表
//int Size(pNode pHead);//链表中结点个数
//void PrintList(pNode* pHead);//打印链表
//void Insert(pNode pos, DataType value);//在value后插入结点

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