class Solution {
public:

  void combination(vector<vector<int>>& ans,vector<int>& nums,int index){
   if(index>=nums.size()){
    
    ans.push_back(nums);
    return;
   }
   for(int i=index;i<nums.size();i++){
   
    swap(nums[index],nums[i]);
    
 
   combination(ans,nums,index+1);

   //backtrack
    
    swap(nums[index],nums[i]);
   
   
   }
  
   
 


  }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans;
        vector<int> output;
        int index=0;
         combination(ans,nums,index);
         return ans;
    }
};