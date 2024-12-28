class Solution {
    //piche se start krne se loop km chlega ..
public:
    string largestOddNumber(string num) {
        // Start iterating from the last digit
        for (int i = num.length() - 1; i >= 0; --i) {
            // Check if the current digit is odd
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start to the current position (inclusive)
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
