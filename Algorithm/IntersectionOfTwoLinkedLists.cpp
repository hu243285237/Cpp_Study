///////////////////////////////////////////////////////////////////////////////////
//  编写一个程序，找到两个单链表相交的起始节点。...
///////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/intersection-of-two-linked-lists/description/
///////////////////////////////////////////////////////////////////////////////////

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
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        
        while (tempA != tempB)
        {
            tempA = tempA ? tempA->next : headB;
            tempB = tempB ? tempB->next : headA;
        }
        
        return tempA;
    }
};
