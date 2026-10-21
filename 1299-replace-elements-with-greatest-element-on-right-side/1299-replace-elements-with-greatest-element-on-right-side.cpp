class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=-1;
         vector<int> ans;
       for(int i=0;i<n;i++){
        maxi=-1;
        for(int j=i+1;j<n;j++){
        if(arr[j]>maxi){
            maxi=max(maxi,arr[j]);
        }
        }
        ans.push_back(maxi);

       }
       ans[n-1]=-1;
        return ans;
    }
};