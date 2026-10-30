class Solution {
public:
int sum(vector<int>& nums,int s,int e){
    int su=0;
    for(int i=s;i<=e;i++){
        su+=nums[i];
    }
    
    return su;
}
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
         int n=arr.size();
        if(n==1){
            double ans=arr[0];
            return ans;
        }
        int st=0;
        int end=st+k-1;
      
        int add=sum(arr,st,end);
        
        int ans=0;
        int target=threshold*k;
             if(add>=target){
                ans++;
             }
        while(end<n-1 && st<=end){
             add=add-arr[st]+arr[end+1];
           
             if(add>=target){
                ans++;
             }
            st++;
            end++;
            
        }
       
        return ans;
    }
};