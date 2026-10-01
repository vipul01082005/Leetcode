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

int count(ListNode*head){
int ans=0;
ListNode*temp=head;
while(temp!=NULL){
    temp=temp->next;
    ans++;
}
return ans;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp1=headA;
        ListNode*temp2=headB;
       int size1=count(temp1);
       int size2=count(temp2);
       if(size1<size2){
        int diff=size2-size1;
        while(diff--){
            temp2=temp2->next;
        }
       }else{
         int diff=size1-size2;
        while(diff--){
            temp1=temp1->next;
        }
       }
       while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
       }

       return NULL;

    }
};