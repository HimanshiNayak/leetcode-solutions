class Solution {
public:
    int robHelperMemoisation(int i, vector<int>& nums, vector<int>&dp){
        if(i>=nums.size()) return 0;
        // step3: check base case
        if(dp[i] != -1) return dp[i];
        int robAmountInclude = nums[i] + robHelperMemoisation(i+2, nums, dp);
        int robAmountExclude = 0 + robHelperMemoisation(i+1, nums, dp);
        // Step2: check for ans
        dp[i] = max(robAmountInclude, robAmountExclude);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> dp(n+1, -1);
        int ans = robHelperMemoisation(0, nums, dp);
        return ans;
        }
};