class Solution {
    public:
    struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
public:

ListNode * hasCycle(ListNode *head) {
    
     ListNode* slow=head;
     ListNode * fast=head;
     while(fast!=NULL  && fast->next !=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
            return slow;
            }
        }
  return NULL;
    }
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       vector<ListNode*>nodes(n);
     for(int i=0;i<n;i++){
       nodes[i]=new ListNode(i);
     }
     for(int i=0;i<n;i++){
        nodes[i]->next=nodes[nums[i]];
     }
      ListNode*temp=hasCycle(nodes[0]);

    

        return temp->val;
    }
};