class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0; // Initialize range of open parentheses

        for (char c : s) {
            if (c == '(') {
                leftMin++;
                leftMax++;
            } else if (c == ')') {
                leftMin--;
                leftMax--;
            } else { // c == '*'
                leftMin--;
                leftMax++;
            }

            if (leftMax < 0) { // Too many closing parentheses
                return false;
            }

            if (leftMin < 0) { // Adjust for possible negative open count
                leftMin = 0;
            }
        }

        return leftMin == 0; // Valid if no unmatched open parentheses
    }
};