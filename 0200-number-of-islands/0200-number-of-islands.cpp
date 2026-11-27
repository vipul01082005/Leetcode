class Solution {
public:

    void bfs(int i,int j,vector<vector<int>>&visited,vector<vector<char>>&grid){
        visited[i][j]=1;
         int m=grid[0].size();
     int n=grid.size();
      queue<pair<int,int>>q;
      q.push({i,j});
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,-1,1};
      while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
           for(int k=0;k<4;k++){
                    int nrow=row+drow[k];
                    int ncol=col+dcol[k];
                    if(nrow>=0 && nrow<n && ncol>=0 
                    && ncol<m && grid[nrow][ncol]=='1' && visited[nrow][ncol]==0){
                          visited[nrow][ncol]=1;
                          q.push({nrow,ncol});
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