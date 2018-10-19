//////////////////////////////////////////////////////////////////////////////////////////
//  给定一个二叉树，找出其最大深度。二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
//////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/description/
//////////////////////////////////////////////////////////////////////////////////////////

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
    
    int maxDepth(TreeNode* root)
    {   
        if (root == NULL)
        {
            return 0;
        }
        
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        return left > right ? left + 1 : right + 1;
    }
};
