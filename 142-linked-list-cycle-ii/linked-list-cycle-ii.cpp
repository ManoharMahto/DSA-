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
    ListNode*  findHead(ListNode*slow, ListNode*fast){
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }

    ListNode *detectCycle(ListNode *head) {
         if(head==NULL || head->next==NULL)return nullptr;
       ListNode*slow=head;
       ListNode*fast=head;
       while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return findHead(head,fast);
       }
       return NULL;
    }
};