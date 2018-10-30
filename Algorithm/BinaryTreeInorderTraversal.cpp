/////////////////////////////////////////////////////////////////////////////////
//  给定一个二叉树，返回它的中序 遍历。
/////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/binary-tree-inorder-traversal/description/
/////////////////////////////////////////////////////////////////////////////////

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
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> v;
        
        Recursion(root, v);
        
        return v;
    }
    
    void Recursion(TreeNode* root, vector<int>& v)
    {
        if (root)
        {
            Recursion(root->left, v);
            v.push_back(root->val);
            Recursion(root->right, v);
        }
    }
};
