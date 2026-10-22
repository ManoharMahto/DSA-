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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }

        count=count/2+1;
        int k=0;
        temp=head;
        while(temp){
            k++;
            if(k==count-1){
                ListNode*ele=temp->next;
                temp->next=ele->next;
                delete ele;
                return head;
            }
            temp=temp->next;
        }
        return nullptr;
    }
};