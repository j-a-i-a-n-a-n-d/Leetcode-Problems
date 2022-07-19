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
      /*  if (head->next==NULL || head==NULL)
        {
            return head;
        }
        ListNode *head1=head;
        int deleted_item=INT_MIN;
        int c=0;
        while (head->next)
        {
            if (head->next && (head->val==head->next->val))
            {
                deleted_item=head->next->val;
                ListNode *temp = head->next;
                head->next=temp->next;
                delete temp;
            }
            else if (head->val==deleted_item)
            {
                ListNode *temp=head;
                if (head1==head && c==0)
                {
                    head1=temp->next;
                    head=head1;
                    c++;
                }
                else{
                    ListNode *temp=head;
                    
                }
                delete temp;
            }
            else
            {
                head=head->next;
            }
        }
        return head1;*/
        ListNode *dummy=new ListNode(0,head);
        ListNode *prev=dummy;
         
         while(head!=NULL){
        
            if(head->next!=NULL && head->val==head->next->val)
            {    
                    while(head->next!=NULL && head->val==head->next->val)head=head->next;
                    prev->next=head->next;
            }
            else 
                prev=prev->next;
            head=head->next;
        }
        return dummy->next;
            
    }
};