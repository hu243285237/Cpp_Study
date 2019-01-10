//////////////////////////////////////////////////////////////////////////////
//  给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//  如果有两个中间结点，则返回第二个中间结点。
//////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/middle-of-the-linked-list/description/
//////////////////////////////////////////////////////////////////////////////

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
    
    ListNode* middleNode(ListNode* head)
    {
        ListNode* listNode1 = head;
        ListNode* listNode2 = head;
        
        while (listNode2->next && listNode2->next->next)
        {
            listNode1 = listNode1->next;
            listNode2 = listNode2->next->next;
        }
        
        return listNode2->next ? listNode1->next : listNode1;
    }
};
