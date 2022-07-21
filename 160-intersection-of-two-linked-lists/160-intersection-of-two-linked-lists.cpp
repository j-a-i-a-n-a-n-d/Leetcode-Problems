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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       /* ListNode *head1=headA;
        ListNode *head2=headB;
        while (head1)
        {
            head2=headB;
            while (head2)
            {
                if (head2==head1)
                    return head1;
                head2=head2->next;
            }
            head1=head1->next;
        }
        return NULL;*/
        
    ListNode *ptrA = headA, *ptrB = headB;
    while (ptrA != ptrB) { 
        ptrA = ptrA ? ptrA->next : headB;
        ptrB = ptrB ? ptrB->next : headA;
    }
    return ptrA;
    }
};