class Solution {
public:
    bool isAnagram(string s, string t) {
        //if both have diff lengths thsy cant have same alphabets with same count
        if(s.length()!= t.length()){
            return false;
        }
        //sort them and if all the char match them anagram , otherwise not
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i])return false;
        }
        return true;
    }
};