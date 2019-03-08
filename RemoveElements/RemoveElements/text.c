#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

struct ListNode {
   int val;
   struct ListNode *next;
};


struct ListNode* removeElements(struct ListNode* head, int val) {
	if (!head)
		return head;
	head->next = removeElements(head->next, val);
	return head->val == val ? head->next : head;
	

	
}