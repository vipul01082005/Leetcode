class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int songs=0;
        unordered_map<int,int>mp;
        for(int i:time){
            int x=i%60;
            int need=(60-x)%60;
            if(mp.find(need)!=mp.end()){
                songs+=mp[need];
            }
            mp[x]++;

        }
        return songs;
    }
};