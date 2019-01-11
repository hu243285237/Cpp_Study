///////////////////////////////////////////////////////////////////////
//  如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
//  只有给定的树是单值二叉树时，才返回 true；否则返回 false。
///////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/univalued-binary-tree/description/
///////////////////////////////////////////////////////////////////////

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
    
    bool isUnivalTree(TreeNode* root) 
    {
        return isSameValve(root, root->val);
    }
    
    bool isSameValve(TreeNode* root, int value)
    {
        if (!root) return true;
        
        if (root->val != value) 
        {
            return false;
        }
        else
        {
            return isSameValve(root->left, value) && isSameValve(root->right, value);
        }
    }
};
