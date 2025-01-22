
class Solution {
public:
    vector<vector<int>> res;

    void subset(int i, vector<int>& nums, int n, vector<int>& ans) {
        res.push_back(ans); // Add the current subset

        for (int idx = i; idx < n; idx++) {
            // Skip duplicates
            if (idx > i && nums[idx] == nums[idx - 1]) continue;

            ans.push_back(nums[idx]); // Include the current element
            subset(idx + 1, nums, n, ans); // Recurse for the next elements
            ans.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans; // Temporary storage for the current subset
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        int n = nums.size();
        subset(0, nums, n, ans);
        return res;
    }
};

// f(i , ds){
//     ans.push_back(ds)for(idx =i;idx<n;idx++){
//         if(idx!=i && nums[ids]==nums[idx-1])continue;
//         f(i+1,ds)
//         ds.pop_back();
//     }
// }