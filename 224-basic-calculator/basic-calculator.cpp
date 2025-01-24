class Solution {
public:
    int helper(string s, int& idx) {
        int result = 0;
        int sign = 1;
        int number = 0;

        for (; idx < s.length(); idx++) {
            char currentChar = s[idx];
            if (currentChar == ' ') continue;
            else if (currentChar == '+' || currentChar == '-') {
                result += sign * number;
                number = 0;
                sign = (currentChar == '-') ? -1 : 1;
            } else if (currentChar == '(') {
                result += sign * helper(s, ++idx);
            } else if (currentChar == ')') {
                break;
            } else {
                number = number*10+(currentChar - '0');
            }
        }
        return result + sign * number;
    }

    int calculate(string s) {
        int idx = 0;
        return helper(s, idx);
    }
};
