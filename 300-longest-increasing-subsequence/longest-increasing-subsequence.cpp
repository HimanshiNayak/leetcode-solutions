class Solution {
public:
// int length(vector<int>&nums , int cur , int pre,vector<vector<int>>dp){
//     if(cur>=nums.size())return 0;
//     int x=0,y=0;
//     if (dp[cur][pre+1]!= -1)return dp[cur][pre+1];

//     if(pre == -1 ||nums[cur]>nums[pre]){
//         y = 1 + length(nums,cur+1,cur,dp);
//     }
//         x = length(nums,cur+1,pre,dp); 
//     return  dp[cur][pre+1] = max(x,y); //pre+1 , bcs pre is -1
// }  
//     int lengthOfLIS(vector<int>& nums) {
//         vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
//         return length(nums, 0 ,-1,dp);
//     }
// };


// class Solution {
// public:
// int length(vector<int>&nums , int cur , int pre){
//     if(cur>=nums.size())return 0;
//     int x=0,y=0;
//     if(pre== -1 ||nums[cur]>nums[pre]){
//     y = 1 + length(nums,cur+1,cur);
//     }
//         x = length(nums,cur+1,pre);
//     return max(x,y);
// }
//     int lengthOfLIS(vector<int>& nums) {
//         return length(nums, 0 ,-1);
//     }
// };
// i->1 to n-1 and j ->0 to i-1
// if(a[j]<a[i])
// dp[i] = max(dp[i],1+dp[j])


// int lengthOfLIS(vector<int>& nums){
//     int maxlts =0;
//     vector<int>dp(nums.size(),1);
//     for(int i=0;i<nums.size();i++){
//         for(int j=0;j<i;j++){
//             if(nums[j]<nums[i]){
//                 dp[i] = max(dp[i],dp[j]+1);
//                 maxlts = max(maxlts,dp[i]);
//             }
//         }
//     }
// return maxlts;
// }
// };


    int lengthOfLIS(vector<int>& nums){
        int n = nums.size();

        // LTS for ith index...
        vector<int> dp(n, 1);

        // at least one subsequence availble
        int maxLTS = 1;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i] > nums[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                    maxLTS = max(maxLTS, dp[i]);
                }
            }
        }
        return maxLTS;
    }
};
// vector<int>lis;
// for(int i=0;i<n-1;i++){
//     if(lis.size()==0 || lis.back()<nums[i]){
//         lis.push_back(nums[i]);
//     }
//     else{
//         int idx = lowerbound(lis.brgin(),lis.end(),nums[i])-lis.begin();
//         lis[idx] -a[i];
//     }
// }return 