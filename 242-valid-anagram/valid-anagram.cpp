class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        vector<int>ans(256,0);
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            ans[s[i]]++;
            ans[t[i]]--;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=0)return false;
        }
        return true;
    }
};