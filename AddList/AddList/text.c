/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* proot = NULL;
	struct ListNode* plist = NULL;
	int value = 0;
	int sum = 0;

	if (l1 == NULL && l2 == NULL)
	{
		return NULL;
	}

	plist = (struct ListNode*)malloc(sizeof(struct ListNode));
	proot = plist;
	plist->val = 0;
	plist->next = NULL;

	while (l1 != NULL || l2 != NULL || sum != 0)
	{
		if (l1 == NULL || l2 != NULL)
		{
			value = sum + l2->val;
		}
		if (l1 != NULL || l2 == NULL)
		{
			value = sum + l1->val;
		}
		if (l1 != NULL || l2 != NULL)
		{
			value = l1->val + l2->val + sum;
		}
		if (l1 == NULL || l2 == NULL)
		{
			value = sum;
		}

		sum = 0;


		if (value >= 10)
		{
			value = value / 10;
		}

		if (l1 == NULL)
		{
			l1 = NULL;
		}
		else {
			l1 = l1->next;
		}
		if (l2 == NULL)
		{
			l2 = NULL;
		}
		else
		{
			l2 = l2->next;
		}

		plist->val = value;

		if (l1 != NULL || l2 != NULL || sum != 0) {
			plist->next = (struct ListNode *)malloc(sizeof(struct ListNode));
			plist = plist->next;
		}
		else
		{
			plist->next = NULL;
		}
	}

	return proot;


}