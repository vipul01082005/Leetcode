class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        vector<int> bonus(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && items[j][0] % items[i][0]==0){
                    bonus[i]++;
                }
            }
        }
        vector<int> dp(budget + 1, 0);
        
        for(int i=0;i<n;i++){
            int p=items[i][1];
            int b=bonus[i];
            vector<int>ndp=dp;
            for(int r=0;r<p && r<=budget ;r++){
                   int best = dp[r];
                int t=1;
                for(int money =r+p;money<=budget;money+=p,t++){
                       ndp[money]=max(ndp[money],best+t+b);
                   
                    best=max(best,dp[money]-t);
                    
                }
            }
            dp.swap( ndp);
        }
        return *max_element(dp.begin(),dp.end());
    }
};