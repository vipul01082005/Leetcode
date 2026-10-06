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
ListNode* rev(ListNode* &curr){

    
    ListNode* prev=NULL;
    
     
      int k=2;
     while(k-- && curr!=NULL ) {
      ListNode*  forward=curr->next;
        curr->next=prev;
        prev=curr;
      curr=forward;
      }
      
       return prev;
}


    ListNode* swapPairs(ListNode* head) {
       
         ListNode*temp=head;
         ListNode*tempH=rev(temp);
          ListNode*prev=head;
        while(temp!=NULL){
             ListNode*next= temp;
           ListNode* curr=rev(temp);
      prev->next=curr;
      prev=next;
        }

        return tempH;
    }
};