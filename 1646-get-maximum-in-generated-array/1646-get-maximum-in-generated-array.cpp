class Solution {
public:
    int getMaximumGenerated(int n) {
     if(n==0){
        return 0;
     }
        vector<int>nums;
     nums.push_back(0);
     nums.push_back(1);
   int cnt=1;
    for(int i=2;i<n+1;i++){
        if(2*cnt==i){
            nums.push_back(nums[cnt]);
            
        }else {
            nums.push_back(nums[cnt]+nums[cnt+1]);
          cnt++;

        }
    }
       
    int maxi=*max_element(nums.begin(),nums.end());
        return maxi;
    }
};