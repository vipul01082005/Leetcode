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
    ListNode*temp=new ListNode(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }else {
        tail->next=temp;
        tail=temp;
    }
}
void store(ListNode*head,int x,vector<int>&ans){
    ListNode*temp=head;
    //less wala part
    while(temp!=NULL){
        if(temp->val<x){
            ans.push_back(temp->val);
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(temp->val>=x){
            ans.push_back(temp->val);
        }
        temp=temp->next;
    }


}
    ListNode* partition(ListNode* head, int x) {
        vector<int>ans;
        store(head,x,ans);
        ListNode* ansH=NULL;
        ListNode* ansT=NULL;
        for(int i:ans){
            insertAtTail(ansH,ansT,i);
        }
        return ansH;
    }
};