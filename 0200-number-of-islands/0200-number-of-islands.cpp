class Solution {
public:
//  void dfs(int i,int j,vector<vector<int>>&visited,vector<vector<char>>&grid){
//     visited[i][j]=true;
//      for(auto row:grid[i]){
//          if(!visited[row][j]){
//              dfs(row,j,visited,grid);
//          }
//      }
//   }
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[i][j]=1;
         int m=grid[0].size();
     int n=grid.size();
      
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,-1,1};
      
           for(int k=0;k<4;k++){
                    int nrow=i+drow[k];
                    int ncol=j+dcol[k];
                    if(nrow>=0 && nrow<n && ncol>=0 
                    && ncol<m && grid[nrow][ncol]=='1' && vis[nrow][ncol]==0){
                          dfs(nrow,ncol,vis,grid);
                    }

           }
                
        
    } 
    
    int numIslands(vector<vector<char>>& grid) {
     int m=grid[0].size();
     int n=grid.size();
     vector<vector<int>>visited(n,vector<int>(m,0));

     int cnt=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visited[i][j]==0 && grid[i][j]=='1'){
              cnt++;
              dfs(i,j,visited,grid);
            }

        }
     }
        return cnt;
    }
};