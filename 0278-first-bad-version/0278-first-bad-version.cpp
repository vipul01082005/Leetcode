// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:

    int firstBadVersion(int n) {
        int s=1;
        int e=n;
     int mid=s+(e-s)/2; 
        while(s<=e){
            mid=s+(e-s)/2; 
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return mid;
            } else if(isBadVersion(mid) && isBadVersion(mid-1))
                e=mid-1;
            else if(!isBadVersion(mid)){
                s=mid+1;
            }
            
        }

        return 0;
    }
};