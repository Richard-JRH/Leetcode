struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

	TreeNode* insertIntoBST(TreeNode* root, int val)
	{
		if (root == NULL)
		{
			root = new TreeNode(val);
			return root;
		}

		if (val < root->val)
		{
			if (root->left != NULL)
				insertIntoBST(root->left, val);
			else
				root->left = new TreeNode(val);
		}
		else
		{
			if (root->right != NULL)
				insertIntoBST(root->right, val);
			else
				root->right = new TreeNode(val);
		}

		return root;
	}
};