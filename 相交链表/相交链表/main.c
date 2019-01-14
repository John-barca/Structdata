struct ListNode {
	int val;
	struct ListNode *next;	
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	struct ListNode *cur = headA;
	struct ListNode *prev = headB;

	if (cur == NULL || prev == NULL)
	{
		return NULL;
	}
	while (cur != prev)
	{
		if (!cur)
			cur = headB;
		else
			cur = cur->next;
		if (!prev)
			prev = headA;
		else
			prev = prev->next;
	}
	return cur;
}