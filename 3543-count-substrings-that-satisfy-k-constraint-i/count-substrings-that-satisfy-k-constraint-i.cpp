class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();  
        int c = 0; // Counter for valid substrings

        for(int i = 0; i < n; i++) {
            int zeros = 0;  // Counter for '0's
            int ones = 0;   // Counter for '1's

            for(int j = i; j < n; j++) {
                // Count the number of '0's and '1's in the substring
                if (s[j] == '0') {
                    zeros++;
                } else {
                    ones++;
                }

                // Check if the substring satisfies the k-constraint
                if (zeros <= k || ones <= k) {
                    c++;
                } else {
                    break; // Stop extending the substring if it violates the k-constraint
                }
            }
        }

        return c;
    }
};