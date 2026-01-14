class Solution {
public:
        vector<vector<int>>ans;
void getsub(vector<int>&nums , int i , vector<vector<int>>&ans, vector<int>&subset){
    if(i>=nums.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(nums[i]);
    getsub(nums,i+1, ans,subset);
    subset.pop_back();
    getsub(nums, i+1,ans,subset);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        if(nums.size()==0)return ans;
        getsub(nums,0,ans,subset);
        return ans;
    }
};