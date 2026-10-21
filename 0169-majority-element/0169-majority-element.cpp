class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int>mp;
     for(int x:nums){
        mp[x]++;
     }
     int n=nums.size();
     for(auto i:mp){
            if(i.second>n/2){
                return i.first;
            }
     }
      
       return -1; 
    }
};