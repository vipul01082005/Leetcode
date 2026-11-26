class Solution {
public:
void dfs(vector<vector<int>> adj,vector<vector<int>>&visited,int row,int col,int& cnt){
    if(row<0 || col<0 || row>=adj.size() || col>=adj[0].size() ||adj[row][col]==0 ||visited[row][col]==1){
        return;
    }
    cnt++;
    visited[row][col]=true;
    

       
        dfs(adj,visited,row-1,col,cnt);
        dfs(adj,visited,row+1,col,cnt);
        dfs(adj,visited,row,col+1,cnt);
        dfs(adj,visited,row,col-1,cnt);
       

        
    
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
       int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
 
        int maxi=INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(visited[i][j]==0 ){
                int cnt=0;
                dfs(grid,visited,i,j,cnt);
                maxi=max(maxi,cnt);
               
            }

            }
        }
        
         return maxi;
      
    }
};