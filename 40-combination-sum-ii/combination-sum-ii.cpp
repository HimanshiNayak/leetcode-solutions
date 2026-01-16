class Solution {
public:
    void findcom(int index, int target, vector<int>& candidates,
                 vector<vector<int>>& ans, vector<int>& ds) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {

            // skip duplicates
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            ds.push_back(candidates[i]);
            findcom(i + 1, target - candidates[i], candidates, ans, ds);
            ds.pop_back();  // backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // VERY IMPORTANT
        vector<vector<int>> ans;
        vector<int> ds;
        findcom(0, target, candidates, ans, ds);
        return ans;
    }
};
