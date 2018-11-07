////////////////////////////////////////////////////////////////////////////////
//  给定二叉搜索树（BST）的根节点和一个值。 你需要在BST中找到节点值等于给定值的节点。 
//  返回以该节点为根的子树。 如果节点不存在，则返回 NULL。
////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/search-in-a-binary-search-tree/description/
////////////////////////////////////////////////////////////////////////////////

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
    
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        TreeNode* res = NULL;
        
        Recursion(root, val, &res);
        
        return res;
    }
    
    void Recursion(TreeNode* root, int val, TreeNode** res)
    {
        if (root)
        {
            if (root->val == val)
            {
                *res = root;
            }
            else 
            {
                Recursion(root->left, val, res);
                Recursion(root->right, val, res);
            }
        }
    }
};
