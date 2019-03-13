////////////////////////////////////////////////////////////////////
//  给定一个 N 叉树，返回其节点值的前序遍历。
////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/n-ary-tree-preorder-traversal/
////////////////////////////////////////////////////////////////////

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution 
{
    public:
    
    vector<int> preorder(Node* root)
    {
        vector<int> v;
        Traversal(v, root);
        return v;
    }
    
    void Traversal(vector<int>& v, Node* root)
    {
        if (!root) return;
        v.push_back(root->val);
        for (Node* child : root->children) Traversal(v, child);
    }
};
