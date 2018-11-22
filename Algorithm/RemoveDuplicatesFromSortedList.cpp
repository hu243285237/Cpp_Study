///////////////////////////////////////////////////////////////////////////////////////
//  给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
///////////////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/description/
///////////////////////////////////////////////////////////////////////////////////////

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
    
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        
        while (temp1 && temp1->next)
        {
            temp1 = temp1->next;
            
            if (temp2->val != temp1->val)
            {
                temp2->next = temp1;
                temp2 = temp1;
            }
            else if (temp1->next == nullptr)
            {
                temp2->next = nullptr;
            }
        }
        
        return head;
    }
};
