class Solution {
public:
    void function(int idx, string comb, string map[], vector<string>& ans, string digits) {
        if (idx >= digits.length()) {
            ans.push_back(comb);
            return;
        }

        string temp = map[digits[idx] - '0'];

        for (int i = 0; i < temp.length(); i++) {
            comb.push_back(temp[i]);
            function(idx + 1, comb, map, ans, digits);
            comb.pop_back();  // backtracking
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) return ans;

        string comb = "";
        string map[10] = {"", "", "abc", "def", "ghi", "jkl",
                          "mno", "pqrs", "tuv", "wxyz"};

        function(0, comb, map, ans, digits);
        return ans;
    }
};
