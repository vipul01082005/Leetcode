class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        int m=edges[0].size();
    unordered_map<int,int>freq;
        for(int i=0;i<edges.size();i++){
            freq[edges[i][0]]++;
            freq[edges[i][1]]++;
            
        }
        int maxi=INT_MIN;
        for(auto i:freq){
            maxi=max(maxi,i.second);
        }
        int ans=0;
        for(auto i:freq){
            if(i.second==maxi){
                ans=i.first;
            }
        }
        return ans;
    }
};