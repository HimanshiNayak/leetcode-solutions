class Solution {
public:
//lcs of the str and rev
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        int n = s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i= n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(s[i]==t[j]){
                    dp[i][j] = 1+dp[i+1][j+1];
                }
                else{
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};