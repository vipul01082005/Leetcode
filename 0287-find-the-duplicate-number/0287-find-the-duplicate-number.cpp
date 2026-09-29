class Solution {
    private:
    int dupli(vector<int>& nums,int index){
        if(nums[index]==nums[index+1]){
            return nums[index];
        }
        return dupli(nums,index+1);
    }
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return dupli(nums,0);
    }
};