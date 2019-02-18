/////////////////////////////////////////////////////////////////////////
//  给定一个二叉树，判断它是否是高度平衡的二叉树。
//  本题中，一棵高度平衡二叉树定义为：
//  一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。
/////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/balanced-binary-tree/description/
/////////////////////////////////////////////////////////////////////////

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
    
    bool isBalanced(TreeNode* root) 
    {
        if (!root) return true;
        
        if (abs(GetDepth(root->left) - GetDepth(root->right)) < 2)
        {
            return isBalanced(root->left) && isBalanced(root->right);
        }
        
        return false;
    }
    
    int GetDepth(TreeNode* root)
    {
        if (!root) return 0;
        
        return max(GetDepth(root->left) + 1, GetDepth(root->right) + 1);
    }
};
