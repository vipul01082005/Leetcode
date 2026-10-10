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
    void bfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[i][j]=1;
         int m=grid[0].size();
     int n=grid.size();
        queue<pair<int,int>>q;
        q.push({i,j});
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,-1,1};
        while(!q.empty()){
            int row =q.front().first;
            int col =q.front().second;
            q.pop();
           for(int k=0;k<4;k++){
                    int nRow=row+drow[k];
                    int nCol=col+dcol[k];
                    if(nRow>=0 && nRow<n && nCol>=0 
                    && nCol<m && grid[nRow][nCol]=='1' && vis[nRow][nCol]==0){
                           vis[nRow][nCol]=1;
                           q.push({nRow,nCol}); 
                    }

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
              bfs(i,j,visited,grid);
            }

        }
     }
        return cnt;
    }
};