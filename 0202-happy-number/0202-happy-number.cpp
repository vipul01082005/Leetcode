class Solution {
public:
int sumSq(int n){
    int sum=0;
    while(n>0){
            int digit=n%10;
            sum+=(digit*digit);
            n/=10;
        }
        return sum;
}
    bool isHappy(int n) {
        int finalSum=n;
      
        while(finalSum>=7){
        finalSum=sumSq(finalSum);

        }
        if(finalSum==1){
            return true;
        }else return false;
    }
};