class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,pair<bool,int>>mp;
        int i=0;
        for(auto s:list1){
            mp[s]=make_pair(true,i++);
        }
        int j=0;
        int ans=INT_MAX;
        string com;
         vector<string>str;
        for(auto s:list2){
            if(mp[s].first){
                int sum=mp[s].second+j;
                if(ans>sum){
                    ans=sum;
                    str.clear();
                    com=s;
                }else if(ans==sum){
                    str.push_back(s);
                }
                ans=min(ans,sum);

            }
            j++;
        }
        str.push_back(com);
        return str;
    }
};