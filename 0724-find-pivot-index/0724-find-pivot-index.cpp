class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix;
        int sum=0;
        for(int i=0;i<nums.size();i++){
                sum+=nums[i];
        
            prefix.push_back(sum);
        }
        if((prefix[prefix.size()-1]-prefix[0])==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(prefix[i-1]==(prefix[prefix.size()-1]-prefix[i])){
                return i;
            }
        }
        return -1;
    }
};