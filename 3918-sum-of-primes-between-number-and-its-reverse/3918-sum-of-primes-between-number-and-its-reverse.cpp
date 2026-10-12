class Solution {
public:
    bool isprime(int n){
        if(n==2){
            return true;
        }
        if(n==1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
   int rev(int n){
        string s=to_string(n);
       string sr=s;
        reverse(sr.begin(),sr.end());
       int ans=stoi(sr);
       return ans;
     }
    int sumOfPrimesInRange(int n) {
        int s=n;
        int e=rev(n);
        int start=min(s,e);
        int end=max(s,e);
       int ans=0;
        for(int i=start;i<=end;i++){
            if(isprime(i)){
                ans+=i;
            }
        }
        return ans;
    }
};