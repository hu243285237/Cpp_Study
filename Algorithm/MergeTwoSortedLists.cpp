//////////////////////////////////////////////////////////////////////////////////////////
//  将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//////////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
//////////////////////////////////////////////////////////////////////////////////////////
//  这代码写的真丑 - -
//////////////////////////////////////////////////////////////////////////////////////////

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
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* temp;
        ListNode* head;
        
        if (l1 == NULL && l2 == NULL)
        {
            return l1;
        }
        else if (l1 != NULL && l2 == NULL)
        {
            head = l1;
            l1 = l1->next;
        }
        else if (l1 == NULL && l2 != NULL)
        {
            head = l2;
            l2 = l2->next;
        }
        else if (l1->val <= l2->val)
        {
            head = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            l2 = l2->next;
        }
        
        temp = head;
        
        while (l1 != NULL || l2 != NULL)
        {
            if (l1 == NULL)
            {
                temp->next = l2;
                temp = l2;
                l2 = l2->next;
            }
            else if (l2 == NULL)
            {
                temp->next = l1;
                temp = l1;
                l1 = l1->next;
            }
            else if (l1->val > l2->val)
            {
                temp->next = l2;
                temp = l2;
                l2 = l2->next;
            }
            else if (l1->val <= l2->val)
            {
                temp->next = l1;
                temp = l1;
                l1 = l1->next;
            }
        }
        
        return head;
    }
};
