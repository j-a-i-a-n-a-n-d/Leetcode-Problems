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
    ListNode* partition(ListNode* head, int x) 
    {
        if (!head)return NULL;
        ListNode *left =  new ListNode();
        ListNode *right = new ListNode();
        ListNode* leftStart= NULL;
        ListNode* rightStart = NULL;
        bool leftExist=false;
        bool rightExist=false;
        while(head)
        {
            if (head->val <x)
            {
                if(!leftExist){leftStart=head;leftExist=true;}
                left->next=head;
                left=head;
            }
            else
            {
                if(!rightExist){rightStart=head;rightExist=true;}
                right->next=head;
                right=head;
            }
            head=head->next;
        }
        right->next=NULL;
        if (!rightStart)return leftStart;
        if (!leftStart)return rightStart;
        left->next=rightStart;
        return leftStart;
        
    }
};