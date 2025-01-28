class Solution {
public:
// int count(string text1, string text2, int i , int j,int count1, int count2){
//     if(i<0 || j<0)return 0;
//     if(text1[i]==text2[j]){
//       count1=  1+ count(text1, text2 , i-1,j-1,count1,count2);
//     }
//     else{
//      count2 = max(count(text1,text2,i-1,j,count1,count2),count(text1,text2,i,j-1,count1,count2));
//     }
//     int maxi = max(count1,count2);
//     return maxi;
// }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size()-1;
//         int m = text2.size()-1;
//          return count(text1,text2,n,m,0,0);
//     }
// };


    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); 

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1; 
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
                }
            }
        }

        return dp[n][m]; 
    }
};
