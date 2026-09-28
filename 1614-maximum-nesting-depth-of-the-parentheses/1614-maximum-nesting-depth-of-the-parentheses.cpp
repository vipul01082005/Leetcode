class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int ans=0;
        int maxi=INT_MIN;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                ans++;
                st.push(s[i]);
            }else  if(s.empty()){
                ans=0;
            }
            else if(s[i]==')'){
                st.pop();
                ans--;
            }
    maxi=max(ans,maxi);
        }
        return maxi;
    }
};