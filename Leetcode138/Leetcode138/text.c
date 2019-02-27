#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

//¸´ÔÓÁ´±í¸´ÖÆ
struct RandomListNode {
	int label;
	struct RandomListNode *next;
	struct RandomListNode *random;
};

struct RandomListNode* copyRandomListNode(struct RandomListNode *head)
{
	if (head == NULL)
	{
		return NULL;
	}
	struct RandomListNode* cur = head;
	while (cur != NULL)
	{
		struct RandomListNode* node = (struct RandomListNode*)malloc(sizeof(RandomListNode));
		node->label = cur->label;
		node->random = NULL;

		RandomListNode *next = cur->next;
		cur->next = node;
		node->next = next;

		cur = next;//node->next|cur->next->next

	}
	cur = head;
	while (cur != NULL)
	{
		struct RandomListNode *node = cur->next;
		if (cur->random != NULL)
		{
			node->random = cur->random->next;
		}
		cur=node->next
	}

	cur = head;
	struct RandomListNode *ret = head->next;
	while (cur!- NULL)
	{
		struct RandomListNode *node = cur->next;
		cur->next = node->next;
		if (node->next != NULL)
		{
			node->next = cur->next->next;
		}
		cur = cur->next;
	}
	return ret;
}