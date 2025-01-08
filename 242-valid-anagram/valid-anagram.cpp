// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         //if both have diff lengths thsy cant have same alphabets with same count
//         if(s.length()!= t.length()){
//             return false;
//         }
//          int freq[26] =0;
//          for(int i=0;i<s.lenth();i++){
//            freq[s[i]-'A']++ ;           //uss array ke us index ko bda do jo ye element hai
//          }  
//            for(int i=0;i<t.lenth();i++){
//            freq[s[i]-'A']-- ;           //uss array ke us index ko bda do jo ye element hai
//          }   //ab unko dec krte jao , jisse we get zeros
//            for(int i=0;i<s.lenth();i++){
//                     if(freq[i]!=0)return false; //if someone is not zero ->not anagram
//            }
//         return true;
//     }
// };

//second sol : make a vector frequency , iterate in s1 and inc the count , in s2 dec them , again iterate to see if all zero , if not return false

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