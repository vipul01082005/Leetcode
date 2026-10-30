class Solution {
public:
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int nvowel(string s,int st,int e){
    int cnt=0;
    for(int i=st;i<=e;i++){
        if(isVowel(s[i])){
            cnt++;
        }
    }
    return cnt;
}
    int maxVowels(string s, int k) {
      
        int st=0;
        int end=st+k-1;
       int vowel=nvowel(s,st,end);
        int maxi=vowel;
        int n=s.length();
       while(end<n-1){
        vowel=vowel-isVowel(s[st])+isVowel(s[end+1]);
        maxi=max(maxi,vowel);
        st++;
        end++;
       }
        return maxi;
    }
};