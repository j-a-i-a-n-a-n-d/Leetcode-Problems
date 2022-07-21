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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        int m=lists.size();
        ListNode *head=NULL;
        for(int i=0;i<m;i++)
        {
            head=mergeTwoAtATime(head,lists[i]);
        }
        return head;
    }
    ListNode *mergeTwoAtATime(ListNode *l1,ListNode *l2)
    {
        if (l1==NULL)return l2;
        if (l2==NULL)return l1;
        ListNode* head = l1->val <= l2->val? l1 : l2;
        head->next = l1->val <= l2->val ?mergeTwoAtATime(l1->next, l2) : mergeTwoAtATime(l1, l2->next);
        return head;
    }
        
};