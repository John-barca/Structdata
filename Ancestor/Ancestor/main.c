/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
	if (root == NULL || p == NULL || q == NULL)
	{
		return NULL;
	}
	if (p == root || q == root)
	{
		return root;
	}
	struct TreeNode *left = lowestCommonAncestor(root->left, p, q);
	struct TreeNode *right = lowestCommonAncestor(root->right, p, q);

	if (left != NULL && right != NULL)
	{
		return root;//���p,q�պ�����������������
	}
	if (left == NULL)
	{
		return right;//����������
	}
	if (right == NULL)
	{
		return left;//����������
	}
	else
	{
		return NULL;
	}

}