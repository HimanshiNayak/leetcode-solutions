// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// class Solution {
// public:
//     int firstBadVersion(int n) {
//        int mini = INT_MAX;           //giving tle ..but we just need to find the smallest for which its true
//        for(int i=n;i>=1;i--){
//            if(isBadVersion(i))mini = i;
//        }
//        return mini;
//     }
// };



class Solution {
public:
    int firstBadVersion(int n) {
 int s =1 ;
 int e = n;
 int mini= INT_MAX;
 while(s<=e){
    int mid =s+ (e-s)/2;
    if(isBadVersion(mid)){
        e = mid-1;
        mini = min(mini,mid);
    }
    else{

    s = mid+1;
    }
 }
return mini;
    }
};