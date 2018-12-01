/////////////////////////////////////////////////////////////////
//  给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，
//  这条路径上所有节点值相加等于目标和。
//  说明: 叶子节点是指没有子节点的节点。
/////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/path-sum/description/
/////////////////////////////////////////////////////////////////

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
    
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if (!root) return false;
        
        if (!root->left && !root->right) return sum - root->val ? false : true;
        
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};
