class Solution {
public:
double sum(vector<int>& nums,int s,int e){
    double sum=0;
    for(int i=s;i<=e;i++){
        sum+=nums[i];
    }
    
    return sum;
}
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            double ans=nums[0];
            return ans;
        }
        int st=0;
        int end=st+k-1;
        double maxi=sum(nums,st,end);
        double add=sum(nums,st,end);
        while(end<n-1 && st<=end){
             add=add-nums[st]+nums[end+1];
             maxi=max(maxi,add);
            st++;
            end++;
            
        }
        maxi=maxi/k;
        return maxi;
    }
};