////////////////////////////////////////////////////////////////////////////////////////
//  给定一个二叉树，返回其节点值自底向上的层次遍历。 
//  （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/description/
////////////////////////////////////////////////////////////////////////////////////////

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
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> v;
        
        if (root == nullptr) return v;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            vector<int> subV;
            
            for (int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                subV.push_back(node->val);
                
                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
            }
            
            v.insert(v.begin(), subV);
        }
        
        return v;
    }
    
    
};
