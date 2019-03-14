///////////////////////////////////////////////////////////////////////
//  给定一个 N 叉树，返回其节点值的后序遍历。
///////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/n-ary-tree-postorder-traversal/
///////////////////////////////////////////////////////////////////////

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
    
    vector<int> postorder(Node* root)
    {
        vector<int> v;
        Traverse(v, root);
        return v;
    }
    
    void Traverse(vector<int>& v, Node* root)
    {
        if (!root) return;
        for (Node* child : root->children) Traverse(v, child);
        v.push_back(root->val);
    }
};
