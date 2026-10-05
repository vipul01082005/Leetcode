class Solution {
public:
void dfs(vector<vector<int>> adj,unordered_map<int,int>&visited,int node){
    visited[node]=true;
    for(int i=0;i<adj.size();i++){
        if(adj[node][i]==1 && visited[i]==0)
        dfs(adj,visited,i);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,int>visited;
        int n=isConnected.size();
       
        int ans=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                dfs(isConnected,visited,i);
                ans++;
            }
        }
        return ans;
    }
};