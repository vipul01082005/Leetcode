class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){
            return false;
        }
       int i=10;
       int cnt=0;
       while(true){
        if(n<i){
            break;
        }
      n-=i;
      cnt++;
      i--;
      } 
      if(cnt%2!=0){
        return true;
      }
       return false;
    }
};