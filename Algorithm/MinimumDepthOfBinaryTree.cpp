///////////////////////////////////////////////////////////////////////////////
//  给定一个二叉树，找出其最小深度。
//  最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
//  说明: 叶子节点是指没有子节点的节点。
///////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/description/
///////////////////////////////////////////////////////////////////////////////

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
    
    int minDepth(TreeNode* root) 
    {
        if (root)
        {
            if (root->left == NULL && root->right == NULL)
            {
                return 1;
            }
            else if (root->right == NULL)
            {
                return minDepth(root->left) + 1;
            }
            else if (root->left == NULL)
            {
                return minDepth(root->right) + 1;
            }
            
            return min(minDepth(root->left), minDepth(root->right)) + 1;
        }
        
        return 0;
    }
};
