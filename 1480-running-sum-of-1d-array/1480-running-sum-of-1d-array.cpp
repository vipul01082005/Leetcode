class Solution {
public:
    
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumFunc;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
            sumFunc.push_back(sum);
        }
        return sumFunc;
    }
};