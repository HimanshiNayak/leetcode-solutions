class Solution {
public:
// in any substr the vowel can come only after its pos i the string , so for every pos , the substr starting from pos and ending at the length will be there, thus starting btw 0to <=p and ending for len-pos total str can be (i+1)*(len-i)
    long long countVowels(string word) {
        long long ans =0;
        long long n = word.length();
        for(int i=0;i<n;i++){
            if(word[i]=='a'|| word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                ans+=(n-i)*(i+1);
            }
        }
        return ans;
    }
};