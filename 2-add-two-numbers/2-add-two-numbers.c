/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{  
    struct ListNode*l=NULL; 
    struct ListNode*r=NULL;
    int sum=0;
    int c=0;
    while (l1 || l2 ||c)
    {
        sum=0;
        if (l1)
        {
            sum=sum+l1->val;
            l1=l1->next;
        }
        if (l2)
        {
            sum=sum+l2->val;
            l2=l2->next;
        }
        sum=sum+c;
        c=sum/10;
        struct ListNode *p=(struct ListNode *)malloc(sizeof(struct ListNode));
        p->val=sum%10;
        p->next=NULL;
        if (l==NULL)
        {
            l=p;
            r=p;
        }
        else
        {
            r->next=p;
            r=p;
        }
    }
    return l;
}