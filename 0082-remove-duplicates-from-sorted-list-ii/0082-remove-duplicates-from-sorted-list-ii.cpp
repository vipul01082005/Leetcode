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

    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode*S=head;
        ListNode*Sp=new ListNode(-1);
        ListNode*Sph=Sp;
        Sp->next=head;
        while( S!=NULL && S->next!=NULL ){
            if(S->val==S->next->val){
            while(S->next!=NULL && S->val==S->next->val){
                ListNode*node=S->next;
             S->next=node->next;
             delete node;
             }
             ListNode*node=S;
             if(S->next!=NULL){
            S=S->next;
            Sp->next=S;
            delete node;
             }
            else {
               
                Sp->next=NULL;
            delete node;
             S=NULL;

            }
            
            }else {

            Sp=S;
            S=S->next;
           
            }

         }
         ListNode*ans=Sph->next;
         delete Sph;
        return ans;
    }
};