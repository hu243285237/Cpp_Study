///////////////////////////////////////////////////////////////////////////////////////////////
//  将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
//  本题中，一个高度平衡二叉树是指一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1。
///////////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/description/
///////////////////////////////////////////////////////////////////////////////////////////////

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
    
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        return sort(nums, 0, nums.size() - 1);
    }
    
    TreeNode* sort(vector<int>& nums, int left, int right)
    {
        if (left > right) return NULL;
        
        int mid = (left + right) / 2;
        
        TreeNode* current = new TreeNode(nums[mid]);
        
        current->left = sort(nums, left, mid - 1);
        current->right = sort(nums, mid + 1, right);
        
        return current;
    }
};
