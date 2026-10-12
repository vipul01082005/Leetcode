class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int first=-1;
        int sec=-1;
        int third=-1;
       
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
       
        if(arr[n-1]%3!=0){
            return false;
        }
       int part=arr[n-1]/3;
       int i=0;
      while(i<n){
        if(first ==-1 && part==arr[i]){
            first=i;
           
        }
        else  if(first !=-1 && sec==-1 &&  i>first && (arr[i]-arr[first])==part){
                sec=i;
           
            }
        else if(sec!=-1 && i>sec &&(arr[n-1]-arr[sec])==part){
            third=i;
           
        }
        i++;
       }
       
    if(sec>first  && third==n-1){
        return true;
    }
       return false;
    }
};