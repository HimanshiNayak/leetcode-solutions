class Solution {
public:
    string removeOuterParentheses(string s) {
     string result = "";
    int depth = 0; // Variable to track the depth of parentheses
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            if(depth > 0) {
                // Append '(' only if it's not an outer parenthesis
                result += '(';
            }
            depth++; // Increase depth for every opening parenthesis
        } else if(s[i] == ')') {
            depth--; // Decrease depth for every closing parenthesis
            if(depth > 0) {
                // Append ')' only if it's not an outer parenthesis
                result += ')';
            }
        }
    }
    
    return result;
    }
};