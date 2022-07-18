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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (head==NULL)
            return NULL;
        ListNode *head1=head;
        while (head->next)
        {
            if (head->val==head->next->val)
            {
                ListNode *temp=head->next;
                head->next=temp->next;
                delete temp;
                
            }
            else
            {
                head=head->next;
            }
        }
        return head1;
    }
};