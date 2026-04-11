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
    bool isPalindrome(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=NULL;
        ListNode *curr=slow;
        while(curr)
        {
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;

        }
        ListNode *fhalf=head;
        ListNode *shalf=prev;
        while(shalf)
        {
        if(fhalf->val!=shalf->val)
        {
            return false;
       
        } fhalf=fhalf->next;
        shalf=shalf->next;
        }
        
        return true;
        
    }
};