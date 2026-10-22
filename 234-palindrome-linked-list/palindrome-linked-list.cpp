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
    ListNode* reverse(ListNode*temp){
        if(temp==NULL || temp->next==NULL)return temp;

        ListNode*prev=NULL;
        while(temp){
            ListNode*ele=temp;
            temp=temp->next;
            ele->next=prev;
            prev=ele;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode*newHead=reverse(slow->next);
       ListNode*right=newHead;
       ListNode*left=head;
       while(right){
        if(left->val!=right->val){
            reverse(newHead);
            return false;
        }
        left=left->next;
        right=right->next;
       }
       reverse(newHead);
       return true;
    }
};