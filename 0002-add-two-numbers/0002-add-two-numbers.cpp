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
    void insertAtTail(ListNode*&head,ListNode*&tail,int d){
        ListNode* temp=new ListNode(d);
        if(head==NULL){
            head=temp;
            tail=temp;
        }else {
            tail->next=temp;
            tail=temp;
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head1=l1;
        ListNode*head2=l2;
        ListNode*head=NULL;
        ListNode*tail=NULL;
        int carry=0;
        int sum=0;
        while(head1!=NULL && head2!=NULL ){
           sum=head1->val + head2->val+carry;
            int ele=sum%10 ;
            insertAtTail(head,tail,ele);
            head1=head1->next;
            head2=head2->next;
            carry=sum/10;
        }
        while(head1!=NULL){
           sum=head1->val+carry;
            int ele=sum%10 ;
            insertAtTail(head,tail,ele);
           head1=head1->next;
            carry=sum/10;

        }
        while(head2!=NULL){
           sum=head2->val+carry;
            int ele=sum%10 ;
            insertAtTail(head,tail,ele);
       
            head2=head2->next;
            carry=sum/10;

        }
        if(carry!=0){

           
            int ele=carry ;
            insertAtTail(head,tail,ele);

        }
        return head;
    }
};