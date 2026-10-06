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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*temp=head;
        vector<int>even;
        vector<int>odd;
        int i=0;
        while(temp!=NULL){
            if(i%2==0)
            odd.push_back(temp->val);
            else
            even.push_back(temp->val);
            i++;
            temp=temp->next;
        }

        temp=head;
       
        int j=0;
      
        while(temp!=NULL && j<odd.size()){
               temp->val= odd[j++];
               temp=temp->next;
        }
        j=0;
        while(temp!=NULL && j<even.size()){
               temp->val= even[j++];
               temp=temp->next;
        }
        return head;

    }
};