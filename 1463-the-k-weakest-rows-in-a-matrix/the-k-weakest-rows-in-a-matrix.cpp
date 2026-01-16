class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> rows;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int val : mat[i]) {
                if (val == 1) count++;
            }
            rows.push_back({count, i});
        }

        sort(rows.begin(), rows.end());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(rows[i].second);
        }

        return ans;
    }
};
