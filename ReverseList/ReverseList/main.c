/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *root = head;
	struct ListNode *pre = NULL;
	struct ListNode *next = NULL;
	if (head == NULL) return NULL;
	while (root->next) {
		next = root->next;
		root->next = pre;
		pre = root;
		root = next;
	}
	root->next = pre;
	return root;
}
