//////////////////////////////////////////////////////////////////////////////////////
//  给定一个二叉树，返回它的 后序 遍历。
//////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/binary-tree-postorder-traversal/description/
//////////////////////////////////////////////////////////////////////////////////////

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
    
    vector<int> postorderTraversal(TreeNode* root) 
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
            Recursion(root->right, v);
            v.push_back(root->val);
        }
    }
};
