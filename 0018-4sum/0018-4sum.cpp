class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
            vector<vector<int>> ans;
            sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                 if(j>i+1 && nums[j]==nums[j-1]) continue;
                int s=j+1;
                int e=n-1;

                while(s<e){
            long long sum=(long long)nums[i]+nums[j]+nums[s]+nums[e];
            if(sum==target){
                 ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                 while(s<e && nums[s]==nums[s+1]){
                    s++;
                 }
                 while(s<e && nums[e]==nums[e-1]){
                    e--;
                 }
                 s++;
                 e--;
               }else if(sum>target){
                e--;
               }else s++;

                }
                    
                
            }
        }
        return ans;
    }
};