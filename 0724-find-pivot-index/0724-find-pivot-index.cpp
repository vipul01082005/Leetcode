class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix;
        for(int i=0;i<nums.size();i++){
        int sum=0;
            for(int j=0;j<=i;j++){
                sum+=nums[j];

            }
        
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