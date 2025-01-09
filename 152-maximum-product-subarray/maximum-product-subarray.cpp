class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int n=nums.size();
        int pre =1;
             int suf =1;
        for(int i=0;i<nums.size();i++){
        if(pre==0)pre =1;
        if(suf ==0)suf =1;
        pre *= nums[i];
        suf *= nums[n-i-1];
        ans = max(ans,max(pre,suf));
        }
        return ans;
    }
};