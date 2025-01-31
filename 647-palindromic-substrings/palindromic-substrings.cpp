class Solution {
public:

int countSubstrings(string s) {
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int count = 0;

    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
        count++;
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            count++;
        }
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            if (s[i] == s[i + len - 1] && dp[i + 1][i + len - 2]) {
                dp[i][i + len - 1] = true;
                count++;
            }
        }
    }

    return count;
}
};
