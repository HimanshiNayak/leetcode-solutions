class Solution {
public:
        vector<string> res;

    void valid(int open, int close, string ans, vector<string>& res) {
        if (open == 0 && close == 0) {
            res.push_back(ans);
            return;
        }
        if (open > 0) {
            ans.push_back('(');
            valid(open - 1, close, ans, res);
            ans.pop_back(); // Backtrack
        }
        if (close > open) {
            ans.push_back(')');
            valid(open, close - 1, ans, res);
            ans.pop_back(); // Backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        int open = n, close = n;
        string ans;
        valid(open, close, ans, res);
        return res;
    }
};