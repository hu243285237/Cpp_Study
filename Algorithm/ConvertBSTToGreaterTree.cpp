//////////////////////////////////////////////////////////////////////////////
//  给定一个二叉搜索树（Binary Search Tree），把它转换成为累加树（Greater Tree)，
//  使得每个节点的值是原来的节点值加上所有大于它的节点值之和。
//////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/convert-bst-to-greater-tree/description/
//////////////////////////////////////////////////////////////////////////////

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
    public:
    
    TreeNode* convertBST(TreeNode* root)
    {
        int sum = 0;
        
        toSum(root, sum);
        
        return root;
    }
    
    void toSum(TreeNode* root, int& sum)
    {
        if (root)
        {
            toSum(root->right, sum);
            int originVal = root->val;
            root->val += sum;
            sum += originVal;
            toSum(root->left, sum);
        }
    }
};
