class Solution{
public:

 void recursion(vector<int>& nums, vector<int>& ds, vector<int>freq,vector<vector<int>>& ans) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] != 1) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recursion(nums, ds, freq, ans);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        int n = nums.size();
       vector<int>freq(n);

        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;

        vector<vector<int>> ans;
        recursion(nums, ds, freq, ans);

        return ans;
    }
};

