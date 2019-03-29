#include <stdio.h>
#include <stdlib.h>


struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* Reverse(struct ListNode* head)
{
	if (head->next == NULL)
	{
		return head;
	}
	struct ListNode* prev = head;
	struct ListNode* next = prev->next;
	struct ListNode* cur;
	while (next)
	{
		cur = next->next;
		next->next = prev;
		prev = next;
		next = cur;
	}
	head->next = NULL;
	return prev;
}


bool isPalindrome(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
	{
		return true;
	}
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast)
	{
		slow = slow->next;
		fast = fast->next ? fast->next->next : fast->next;
	}
	slow = Reverse(slow);
	fast = head;
	while (slow&&fast)
	{
		if (fast->val == slow->val)
		{
			slow = slow->next;
			fast = fast->next;
		}
		else {
			return false;
		}
	}
	return true;
}