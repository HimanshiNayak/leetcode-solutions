class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>mp;
       int maxlen = INT_MIN;
       if(s=="")return 0;
       int left =0;
       for(int right =0;right<s.length();right++){
        mp[s[right]]++;
        while(mp[s[right]]>1){
            mp[s[left]]--;
            left++;
        }
        maxlen = max(maxlen, right-left+1);
       }
       return maxlen;
    }
};