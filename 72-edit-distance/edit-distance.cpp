class Solution {
public:
    // int distance(string &word1, string &word2, int i, int j) {
    //     if (i >= word1.size()) return word2.size() - j;
    //     if (j >= word2.size()) return word1.size() - i;
    //     if (word1[i] == word2[j]) {
    //         return distance(word1, word2, i + 1, j + 1);
    //     } else {
    //         int insertOp = 1 + distance(word1, word2, i, j + 1);
    //         int deleteOp = 1 + distance(word1, word2, i + 1, j);
    //         int replaceOp = 1 + distance(word1, word2, i + 1, j + 1);
    //         return min({insertOp, deleteOp, replaceOp});
    //     }
    // }

    int distance(string &word1, string &word2, int i, int j,vector<vector<int>>&dp) {
        if (i >= word1.size()) return word2.size() - j;
        if (j >= word2.size()) return word1.size() - i;
        if(dp[i][j]!=-1)return dp[i][j];
        if (word1[i] == word2[j]) {
            dp[i][j]  = distance(word1, word2, i + 1, j + 1,dp);
        } else {
            int insertOp = 1 + distance(word1, word2, i, j + 1,dp);
            int deleteOp = 1 + distance(word1, word2, i + 1, j,dp);
            int replaceOp = 1 + distance(word1, word2, i + 1, j + 1,dp);
            dp[i][j]= min({insertOp, deleteOp, replaceOp});
        }
        return dp[i][j];
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(), vector<int>(word2.size(), -1));
        return distance(word1, word2, 0, 0,dp);
    }
};






