class Solution {
public:
vector<int> indegree(int n,vector<vector<int>> trust){
    vector<int> ans(n+1,0);
    for(int i=0;i<trust.size();i++){
            ans[trust[i][1]]++;
        
    }
    return ans;
}
vector<int> outdegree(int n,vector<vector<int>> trust){
    vector<int> ans(n+1,0);
    for(int i=0;i<trust.size();i++){
            ans[trust[i][0]]++;
        
    }
    return ans;
}
    int findJudge(int n, vector<vector<int>>& trust) {
   
     vector<int>ind=indegree(n,trust);
     vector<int>outd=outdegree(n,trust);
     int i=1;
     while(i<=n){
        if(ind[i]==n-1 && outd[i]==0){
            return i;
        }
        i++;
     }
     return -1;
    }
};