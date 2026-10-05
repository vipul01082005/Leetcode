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
 ListNode* reverse(ListNode*&curr){
    ListNode* head=curr;
    ListNode* prev=NULL;
    while(head!=NULL){
    ListNode* nxt=head->next;
        head->next=prev;
        prev=head;
        head=nxt;
    }
    return prev;
 }


    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

      ListNode*second=slow->next;
      slow->next=NULL;
        ListNode*first=head;
       second= reverse(second);
        while(second!=NULL){
              ListNode*temp1=first->next;
              ListNode*temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
       

    }
};