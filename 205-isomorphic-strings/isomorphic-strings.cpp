class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // using freq array
        // if(s.size()!=t.size())return false;
        // vector<int>s1(256,0);
        //   vector<int>s2(256,0);
        // for(int i=0;i<s.size();i++){
        //     if(s1[s[i]] != s2[t[i]]){
        //         return false;
        //     }
        //     s1[s[i]]=i+1;
        //     s2[t[i]] = i+1; 
        // }
        // return true;

        //using hasmap

        unordered_map<char , char>charMap;
        for(int i=0;i<s.length();i++){
            //see if this s strings char in hasmap already 
            if(charMap.count(s[i])){
                //check if it has the same char in value
                if(charMap[s[i]]!= t[i])return false;
            }
            //see if the value is ale=ready mapped with someelse
            else{
                for(auto& pair:charMap ){
                    if(pair.second == t[i])return false;
                }
            }
            charMap[s[i]] = t[i];
        }
        return true;
    }
};