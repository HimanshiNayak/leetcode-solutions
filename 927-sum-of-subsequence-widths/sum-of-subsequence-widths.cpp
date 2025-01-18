class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        int mod = 1000000007;
        sort(nums.begin(),nums.end());
        int n = nums.size();
    vector<long>ans(n) ;
    ans[0] =1;
    for(int i=1;i<n;i++){
        ans[i] = (ans[i-1]*2)%mod;
    }
    long sum =0;
    for(int i=0;i<n;i++){
        sum+=(nums[i]*ans[i])%mod;
            sum=(sum-((nums[i]*ans[n-i-1])%mod)+mod)%mod;

    }
return (int)sum;

    }
};