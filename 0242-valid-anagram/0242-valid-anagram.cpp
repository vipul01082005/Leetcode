class Solution {
public:
    bool isAnagram(string s, string t) {
       
        unordered_map<int,int>mp;
        if(s.size()!=t.size()){
            return false;
        }else {
        for(char ch:s){
            mp[ch]++;
        }
       for(char ch:t){
        if(mp.find(ch)!=mp.end()){
            mp[ch]--;
        }
       }
       for(auto i:mp){
        if(i.second>0){
            return false;
        }
       }
      

        }

        return true;
    }
};