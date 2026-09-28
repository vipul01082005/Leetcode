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
ListNode *reverse(ListNode *&head){
    ListNode * prev=NULL;
    while(head!=NULL){
       ListNode *next =head->next;
       head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   
        int index=n;
        int i=1;
    
       head=reverse(head);
        ListNode* temp= head;
        while(temp!=NULL && i<index-1){
            temp=temp->next;
            i++;
        }
        if(n==1){
             ListNode* node=head;
             head=head->next;
             delete node;
        }else {
         ListNode* node=temp->next;   // jise delete karna hai use store karao 
        temp->next=node->next; // temp ko delete karne wale node ke aage badhao 
        delete node; // delete the node
        }
       
       
    return reverse(head);


    }
};