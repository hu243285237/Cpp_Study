//////////////////////////////////////////////////////////////////////
//  反转一个单链表。
//////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/reverse-linked-list/description/
//////////////////////////////////////////////////////////////////////

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
    
    ListNode* reverseList(ListNode* head) 
    {
        if (head == NULL)
        {
            return NULL;
        }
        
        ListNode* temp = head->next;
        ListNode* reverse = head;
        
        head->next = NULL;
        
        while (temp)
        {
            ListNode* tempNext = temp->next;
            
            temp->next = reverse;
            
            reverse = temp;
            
            temp = tempNext;
        }
        
        return reverse;
    }
};
