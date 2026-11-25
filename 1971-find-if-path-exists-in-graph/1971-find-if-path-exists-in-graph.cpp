class Solution {
public:
    void dfs(vector<vector<int>>& adj,unordered_map<int,int>&visited,vector<int>&ans,int node){
     
     ans.push_back(node);
      visited[node]=true;
     for(auto i:adj[node]){
         if(!visited[i]){
             dfs(adj,visited,ans,i);
         }
     }
  }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,int>visited;
        vector<int>ans;
        vector<vector<int>> adj(n);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(adj,visited,ans,source);
        if(visited.find(source)!=visited.end() && visited.find(destination)!=visited.end()){
            return true;
        }
         return false;

    }
};