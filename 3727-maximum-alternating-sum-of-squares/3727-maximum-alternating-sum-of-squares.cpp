class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long >square;
        for(int x:nums){
            square.push_back(1LL * x*x);
        }
        sort(square.begin(),square.end());
        int n=square.size();
        long long ans=0;
        for(int i=0;i<n;i++){
           
            if(i< n/2)
            ans-=square[i];
            else 
            ans+=square[i];
        }
        return ans;
    }
};