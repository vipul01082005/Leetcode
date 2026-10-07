class Solution {
public:
bool isValid(string s){
    stack<int>st;
    for(char ch:s){
        if(ch=='(' ){
            st.push(ch);
        }else if(ch==')') {
            if(st.empty()){
               return false;
            }
                st.pop();
           
        }
    }
    return st.empty();

}
    vector<string> removeInvalidParentheses(string s) {
         vector<string>ans;
         queue<string>q;
         unordered_set<string>visited;
         q.push(s);
         visited.insert(s);
         bool found=false;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string curr=q.front();
                q.pop();
                if(isValid(curr)){
                    ans.push_back(curr);
                    found=true;
                }
                if(found){
                    continue;
                }
                for(int i=0;i<curr.length();i++){
                    if(curr[i]!='(' && curr[i]!=')'){
                        continue;
                    }
                    string next=curr;
                    next.erase(next.begin()+i);
                    if(visited.find(next)==visited.end()){
                        visited.insert(next);
                        q.push(next);
                    }
                }
            }
            if(found) break;
        }
         return ans;
    }
};