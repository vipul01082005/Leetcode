class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            double ans=nums[0];
            return ans;
        }
        int s=0;
        double maxi=INT_MIN;
        double sum=0;
        for(int e=0;e<n;e++){
            sum+=nums[e];
            if(e>=k-1){
                maxi=max(maxi,sum);
                sum-=nums[s];
                s++;
            }
        }
        maxi=maxi/k;
        return maxi;
    }
};