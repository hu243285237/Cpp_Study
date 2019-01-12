////////////////////////////////////////////////////////////////////////////////////////
//  请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
//  现有一个链表 -- head = [4,5,1,9]，它可以表示为:  4 -> 5 -> 1 -> 9...
////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/delete-node-in-a-linked-list/description/
////////////////////////////////////////////////////////////////////////////////////////

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
    public:
    
    void deleteNode(ListNode* node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
