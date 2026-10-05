class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0;
        stack<int>st;
                st.push(0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' ){
                st.push(0);
            }else {
                int x=st.top();
                st.pop();
                int score=(x==0)? 1: 2*x;
                st.top()+=score;
            }
        }
        return st.top();
    }
};