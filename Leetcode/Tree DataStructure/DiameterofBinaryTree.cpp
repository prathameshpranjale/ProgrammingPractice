/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int findmax(TreeNode *root, int &diameter)
    {

        if (root == NULL)
            return 0;

        int lh = findmax(root->left, diameter);
        int rh = findmax(root->right, diameter);

        diameter = max((lh + rh), diameter);

        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        findmax(root, diameter);
        return diameter;
    }
};