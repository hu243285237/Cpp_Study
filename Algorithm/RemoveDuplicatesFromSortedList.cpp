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
        ListNode* temp = head;
        
        while (temp && temp->next)
        {
            if (temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        
        return head;
    }
};
