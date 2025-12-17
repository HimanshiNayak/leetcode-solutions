class Solution {
public:
int sumres(vector<int>& nums, int num){
    int sum =0;
    for(int a :nums){
        sum += ceil((double)a/num);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l =1;
        int h = *max_element(nums.begin(),nums.end());
        int ans;
        while(l<=h){
int mid = l + (h-l)/2;
if(sumres( nums, mid)<=threshold){
    ans = mid;
    h = mid-1;
}
else {
    l = mid+1;
}
        }
        return ans;
    }
};