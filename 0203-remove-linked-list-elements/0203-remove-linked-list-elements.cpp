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
void  deleteNode(ListNode*& head,int val){
    
 
    while(head!=NULL && head->val==val){
         ListNode*node=head;
   head=head->next;
        delete node;
    }
    if(head==NULL)return;
  ListNode*curr=head;
   while(curr->next!=NULL){
    if(curr->next->val==val ){
          ListNode*node=curr->next;
       curr->next=curr->next->next;
       delete node; 
 }else
   curr=curr->next;
   
}
}
    ListNode* removeElements(ListNode* head, int val) {
        deleteNode(head,val);
        return head;
    }
};