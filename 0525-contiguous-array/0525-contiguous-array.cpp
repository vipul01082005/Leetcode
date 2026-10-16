class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int& x:nums){
            if(x==0){
                x=-1;
            }
        }
        int maxi=0;
        int sum=0;
        mp[sum]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum)!=mp.end()){
                int len=i-mp[sum];
                maxi=max(maxi,len);
            }
            else {
                mp[sum]=i;
            }
        }
        return maxi;
      
       

    }
};