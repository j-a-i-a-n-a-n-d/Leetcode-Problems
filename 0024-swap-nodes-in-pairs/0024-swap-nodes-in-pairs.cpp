/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void helperFunction(ListNode *node)
    {
        if(node && node->next && node->next->next)
        {
            ListNode *first = node->next;
            ListNode *second = node->next->next;
            ListNode *temp = second->next;
            node->next=second;
            second->next=first;
            first->next=temp;
            helperFunction(node->next->next);
        }
        else
            return;
    }
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode *pseudoNode=new ListNode(INT_MAX);
        pseudoNode->next = head;
        helperFunction(pseudoNode);
        return pseudoNode->next;
    }
};