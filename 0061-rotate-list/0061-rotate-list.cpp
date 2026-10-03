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
ListNode* reverse(ListNode*&curr,int k){
   
    ListNode*prev=NULL;
    while(k>0 && curr!=NULL){
       ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        k--;
    }
    return prev;
}
int count(ListNode*head){
    int ans=0;
    ListNode*temp=head;
    while(temp!=NULL){
        ans++;
        temp=temp->next;
    }
    return ans;
}
    ListNode* rotateRight(ListNode* head, int k) {
    if(head == NULL || head->next == NULL)
    return head;
        int size=count(head);
        k=k%size;
        if(k==0){
            return head;
        }
         ListNode*curr=head;
        head=reverse(curr,size);
        curr=head;
         ListNode*first= reverse(curr,k);
      
         ListNode*sec=reverse(curr,size-k);

        ListNode*temp=first;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=sec;



     
       
       
        return first;
    }
};