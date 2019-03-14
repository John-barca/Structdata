/*合并两个有序链表*/

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* cur= (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* extra = cur;
	while (l1 != NULL && l2 != NULL)
	{
		if (l1->val <= l2->val)
		{
			extra->next = l1;
			l1 = l1->next;
			extra = extra->next;
		}
		else {
			extra->next = l2;
			l2 = l2->next;
			extra = extra->next;
		}
	}
	if (l1 == NULL && l2 != NULL)
	{
		extra->next = l2;
	}
	else {
		extra->next = l1;
	}
	return cur->next;
}