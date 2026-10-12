class Solution {
public:
    double myPow(double x, int n) {
           long long  cnt=n;
        if(cnt<0){
        cnt=-cnt;
        }
        double ans=1.0;
        
       while (cnt > 0) {

            if (cnt%2==1) {

                ans *= x;

            }
    x*=x;
    cnt/=2;

        }
        if (n < 0) {

            ans = 1.0 / ans;

        }

        
        return ans;
    }
};