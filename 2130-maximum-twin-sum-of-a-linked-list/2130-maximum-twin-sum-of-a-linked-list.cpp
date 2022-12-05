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
    int pairSum(ListNode* head) 
    {
        vector<int> auxillaryArray;
        ListNode *head2=head;
        while (head2)
        {
            auxillaryArray.push_back(head2->val);
            head2=head2->next;
        }
        int sum=0; 
        int n = auxillaryArray.size();
        for(int i=0;i<n/2;i++)
        {
            int a = auxillaryArray[i];
            int b = auxillaryArray[n-i-1];
            if(sum<a+b)sum=a+b;
        }
        return sum;
    }
};