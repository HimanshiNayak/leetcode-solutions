
// class Solution {
// public:
//     void longestCommonSubsequence(string text1, string text2, vector<vector<int>> &dp) {
//         int n = text1.size();
//         int m = text2.size();
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (text1[i - 1] == text2[j - 1]) {
//                     dp[i][j] = dp[i - 1][j - 1] + 1;
//                 } else {
//                     dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                 }
//             }
//         }
//     }

//     string shortestCommonSupersequence(string str1, string str2) {
//         int n = str1.size();
//         int m = str2.size();
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//         longestCommonSubsequence(str1, str2, dp);
//         string scs = "";
//         int i = 0, j = 0;
//         while (i < n && j < m) {
//             if (str1[i] == str2[j]) {
//                 scs.push_back(str1[i]);
//                 i++;
//                 j++;
//             } else if (dp[i + 1][j] > dp[i][j + 1]) {
//                 scs.push_back(str1[i]);
//                 i++;
//             } else {
//                 scs.push_back(str2[j]);
//                 j++;
//             }
//         }
//         while (i < n) {
//             scs.push_back(str1[i]);
//             i++;
//         }
//         while (j < m) {
//             scs.push_back(str2[j]);
//             j++;
//         }
//         return scs;
//     }
// };


class Solution {
public:
    void longestCommonSubsequence(string text1, string text2, vector<vector<int>> &dp) {
        int n = text1.size();
        int m = text2.size();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }

    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        longestCommonSubsequence(str1, str2, dp);
        
        string scs = "";
        //the the str from back and then rev
        int i =n , j = m;
        
        while (i >0 && j > 0) {
            if (str1[i-1] == str2[j-1]) {
                scs.push_back(str1[i-1]);
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                scs.push_back(str1[i-1]);
                i--;
            } else {
                scs.push_back(str2[j-1]);
                j--;
            }
        }
        
        while (i >0) {
            scs.push_back(str1[i-1]);
            i--;
        }
        
        while (j >0) {
            scs.push_back(str2[j-1]);
            j--;
        }
        reverse(scs.begin(),scs.end());
        return scs;
    }
};
