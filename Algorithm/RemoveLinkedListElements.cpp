////////////////////////////////////////////////////////////////////////////////
//  删除链表中等于给定值 val 的所有节点。
////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/remove-linked-list-elements/description/
////////////////////////////////////////////////////////////////////////////////

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
    
    ListNode* removeElements(ListNode* head, int val)
    {
        while (head && head->val == val)
        {
            head = head->next;
        }
        
        ListNode* temp = head;
        
        while (temp)
        {
            while (temp->next && temp->next->val == val)
            {
                temp->next = temp->next->next;
            }
            
            temp = temp->next;
        }
        
        return head;
    }
};
