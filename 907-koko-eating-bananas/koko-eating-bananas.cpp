class Solution {
public:
long long totalhours(vector<int>&piles, int perhour){
    long long totalhour=0;
    for(int a :piles){
        totalhour+= ceil((double)a/perhour);
    }
    return totalhour;
}
    int minEatingSpeed(vector<int>& piles, int h) {
   int maxi = *max_element(piles.begin(),piles.end());
        int low =1; int high = maxi; int ans = maxi;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long eatinghours = totalhours(piles,mid);
            if(eatinghours <=h){
                ans =mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};