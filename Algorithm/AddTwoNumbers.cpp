////////////////////////////////////////////////////////////////////
//  给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，
//  它们的每个节点只存储单个数字。将两数相加返回一个新的链表。
//  你可以假设除了数字 0 之外，这两个数字都不会以零开头。
////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/add-two-numbers/description/
////////////////////////////////////////////////////////////////////
//  代码需要优化
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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        string sum = "";
        
        while (l1 || l2)
        {
            if (l1 && l2)
            {
                sum += to_string((l1->val + l2->val) % 10);
                if (l1->val + l2->val >= 10) 
                {
                    if (l1->next)
                    {
                        l1->next->val++;
                    }
                    else if (l2->next)
                    {
                        l2->next->val++;
                    }
                    else
                    {
                        ListNode* nextList = new ListNode(1);
                        l1->next = nextList;
                    }
                }
                l1 = l1->next;
                l2 = l2->next;
            }
            else if (l1)
            {
                if (l1->val == 10)
                {
                    if (l1->next)
                    {
                        l1->next->val++;
                    }
                    else
                    {
                        ListNode* nextList = new ListNode(1);
                        l1->next = nextList;
                    }
                    sum += "0";
                }
                else
                {
                    sum += to_string(l1->val);
                }
                l1 = l1->next;
            }
            else if (l2)
            {
                if (l2->val == 10)
                {
                    if (l2->next)
                    {
                        l2->next->val++;
                    }
                    else
                    {
                        ListNode* nextList = new ListNode(1);
                        l2->next = nextList;
                    }
                    sum += "0";
                }
                else
                {
                    sum += to_string(l2->val);
                }
                l2 = l2->next;
            }
        }
        
        ListNode* lsum = new ListNode(sum[0] - '0');
        ListNode* head = lsum;
        
        for (int z = 1; z < sum.size(); z++)
        {
            ListNode* nextList = new ListNode(sum[z] - '0');
            lsum->next = nextList;
            lsum = nextList;
        }
    
        return head;
    }
};
