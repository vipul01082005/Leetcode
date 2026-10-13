class Solution {
public:
 
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
         vector<int>ans;
        for(int i:nums){
            ans.push_back(i);
        }
        reverse(nums.begin(),nums.end());
        for(int i:nums){
            ans.push_back(i);
        }
        return ans;
    }
};