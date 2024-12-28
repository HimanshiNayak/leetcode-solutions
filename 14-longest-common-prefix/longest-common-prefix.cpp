class Solution {
public:
//     string longestCommonPrefix(vector<string>& v) {
//         string ans="";
//         sort(v.begin(),v.end());
//         int n=v.size();
//         string first=v[0],last=v[n-1];
//         for(int i=0;i<min(first.size(),last.size());i++){
//             if(first[i]!=last[i]){
//                 return ans;
//             }
//             ans+=first[i];
//         }
//         return ans;
//     }
// };
// first sort that vector , jiss lexicographical order mei aa jayenge(isliye kiya jisse firsta ur last wale ke beech mei jo aayenge unmei toh hoga hi hoga commomn tbhi beech mei hain) , then loop run krke check krlo ,0 seleke  dono mei se jiski leng min ho wha tk , if the char are equal add it to ans str otherwise whi se return ho jao;
string longestCommonPrefix(vector<string>& v) {
     string ans = "";
     sort(v.begin(),v.end());
     int n = v.size();
     string s = v[0] , e = v[n-1];
     for(int i=0;i<min(s.size(),e.size());i++){
        if(s[i]!=e[i])return ans;
        else ans+=s[i];
     }
     return ans;
     }
};