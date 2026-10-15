class Solution {
public:
void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>& image,int newColor,int deltaRow[],int deltaCol[],int iniCol){
    ans[row][col]=newColor;
    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++){
        int nRow=row+deltaRow[i];
        int nCol=col+deltaCol[i];
        if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && image[nRow][nCol]==iniCol && ans[nRow][nCol]!=newColor){
            dfs(nRow,nCol,ans,image,newColor,deltaRow,deltaCol,iniCol);
        }
    }



}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialCol=image[sr][sc];
         vector<vector<int>>ans=image;
         int deltaRow[]={-1,0,1,0};
         int deltaCol[]={0,1,0,-1};
         dfs(sr,sc,ans,image,color,deltaRow,deltaCol,initialCol);
    return ans;
    }
};