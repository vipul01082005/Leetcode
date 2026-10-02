class Solution {
public:
bool solve(string s){
    string og=s;
    reverse(s.begin(),s.end());
    return og==s;
}
    bool validPalindrome(string s) {
        int st=0;
        int e=s.length()-1;
        if(solve(s)){
            return true;
        }
        while(st<=e){
            if(s[st]==s[e]){
              
                st++;
                e--; 
            }
           else  {
              
                string first=s;
                string sec=s;
                first.erase(st, 1);
             sec.erase(e, 1);
                if(solve(first)){
                    return true;
                } 
                 if(solve(sec)){
                    return true;
                }
                 return false;
                

            }
            
        }
        return true;
    }
};