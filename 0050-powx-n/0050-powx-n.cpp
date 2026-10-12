class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(x==1){
            return x;
        }
         long long  cnt=n;
        if(cnt<0){
        cnt=-cnt;
        x=(1/x);
        }
       
        while(cnt>0){
       if(cnt%2==1){
        ans*=x;
       }
            x*=x;
            cnt/=2;
        }

        
        return ans;
    }
};