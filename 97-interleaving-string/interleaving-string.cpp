// class Solution {
// public:
//     bool possible(string &s1, string &s2, string &s3, int i, int j) {
//         if (i >= s1.size() && j >= s2.size()) return true;
//         // if (k >= s3.size()) return false; 
        
//         if (i < s1.size() && s1[i] == s3[i+j] && possible(s1, s2, s3, i + 1, j))
//             return true;
//         if (j < s2.size() && s2[j] == s3[i+j] && possible(s1, s2, s3, i, j + 1))
//             return true;
        
//         return false;  
//     }
//     bool isInterleave(string s1, string s2, string s3) {
//         if (s1.size() + s2.size() != s3.size()) return false;  
//         return possible(s1, s2, s3, 0, 0);
//         vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));


//     }
// };




class Solution {
public:
    bool possible(string &s1, string &s2, string &s3, int i, int j, vector<vector<int>> &dp) {
        if (i >= s1.size() && j >= s2.size()) return true;
        if (dp[i][j] != -1) return dp[i][j];  

        bool ans = false; 

        if (i < s1.size() && s1[i] == s3[i + j]) {
            ans |= possible(s1, s2, s3, i + 1, j, dp);
        }
        if (j < s2.size() && s2[j] == s3[i + j]) {
            ans |= possible(s1, s2, s3, i, j + 1, dp);
        }

        return dp[i][j] = ans;  
    }

    bool isInterleave(string s1, string s2, string s3) {
        if ((s1.size() + s2.size()) != s3.size()) return false;  
        
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, -1)); 
        
        return possible(s1, s2, s3, 0, 0, dp);
    }
};
