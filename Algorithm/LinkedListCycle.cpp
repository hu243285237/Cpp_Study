////////////////////////////////////////////////////////////////////
//  给定一个链表，判断链表中是否有环。
////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/linked-list-cycle/description/
////////////////////////////////////////////////////////////////////

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
    
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
        {
            return false;
        }
        
        ListNode* l1 = head;
        ListNode* l2 = head;
        
        while (l1->next != nullptr && l2->next != nullptr && l2->next->next != nullptr)
        {
            l1 = l1->next;
            l2 = l2->next->next;
            
            if (l1 == l2)
            {
                return true;
            }
        }
        
        return false;
    }
};
