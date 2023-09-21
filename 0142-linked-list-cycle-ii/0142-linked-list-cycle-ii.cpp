/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        
        do
        {
            if(slow==NULL 
               || slow->next==NULL 
               || fast==NULL 
               || fast->next==NULL 
               || fast->next->next==NULL
              )return nullptr;
            slow = slow->next;
            fast = fast->next->next;
        }while(fast!=slow);
        
        fast = head;
        
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
        
    }
};