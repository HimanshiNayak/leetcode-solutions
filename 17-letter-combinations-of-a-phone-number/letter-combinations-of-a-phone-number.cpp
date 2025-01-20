// class Solution {
// public:
//   void function(int idx , string comb ,string map[] , vector<string> ans,string digits){
//     if(idx>=digits.length()){ //if the idx goes out of bound then add comb to ans and return
//         ans.push_back(comb);
//         return ;
//     }
//     string temp  =map[digits[idx]]; //find what is there to be inserted
//     for(int i=0;i<temp.length();i++){
//         comb.push_back(temp[i]);      //push the char to the ans
//         function(idx+1,comb,map,ans,digits);
//         comb.pop_back();
//     }
//   }
//     vector<string> letterCombinations(string digits) {
//         vector<string>ans; //to store the final ans
//         string comb =""; //stores the ans before the return
//         if(digits.length()==0)return ans;
//         int idx =0;
//         string map[10]={"", "","abc",  "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
//         function(idx,comb,map,ans,digits);
//         return ans;
//     }
// };


class Solution {
private:
    void solve(string digit, string output, int i, vector<string>& ans,
               string mapping[]) {
        if (i >= digit.length()) {
            ans.push_back(output);
            return;
        }

        int num = digit[i] - '0';
        string value = mapping[num];

        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            solve(digit, output, i + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digit) {
        vector<string> ans;
        if (digit.length() == 0) {
            return ans;
        }
        int i = 0;
        string output;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digit, output, i, ans, mapping);
        return ans;
    }
};