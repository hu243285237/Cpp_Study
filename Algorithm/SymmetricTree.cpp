//////////////////////////////////////////////////////////////////
//  给定一个二叉树，检查它是否是镜像对称的。
//  例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
//////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/symmetric-tree/description/
//////////////////////////////////////////////////////////////////

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
    
    bool isSymmetric(TreeNode* root) 
    {
        return root == nullptr ? true : isSame(root->left, root->right);
    }
    
    bool isSame(TreeNode* left, TreeNode* right)
    {
        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr || right == nullptr) return false;
        return (left->val == right->val && isSame(left->left, right->right) && isSame(left->right, right->left));
    }
};
