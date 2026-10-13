class Solution {
public:
    int getMaximumGenerated(int n) {
     if(n==0){
        return 0;
     }
        vector<int>nums(n+1,0);
     nums[0]=0;
     nums[1]=1;
     bool flag=true;
    for(int i=2;i<n+1;i++){
        if(flag){
            nums[i]=(nums[i/2]);
            flag=false;
        }else {
            nums[i]=(nums[i/2]+nums[(i/2)+1]);
            flag=true;

        }
    }
       
    int maxi=*max_element(nums.begin(),nums.end());
        return maxi;
    }
};