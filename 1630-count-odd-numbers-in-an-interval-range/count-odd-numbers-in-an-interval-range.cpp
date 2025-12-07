class Solution {
public:
    int countOdds(int low, int high) {
        // int cnt =0;
        // for(int i=low;i<=high;i++){
        //     if(i%2!=0)cnt++;
        // }
        // return cnt;

        //will have half ec=vene and hald odd , ut when both odd then one exra odd
        int nums = high-low+1;
        if(low%2!=0 && high%2!=0)return nums/2 +1;
        else return nums/2 ; }
};