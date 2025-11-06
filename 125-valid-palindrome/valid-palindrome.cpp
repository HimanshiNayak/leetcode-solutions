class Solution {

    bool palindrome(int i, int j, string& s) {
    // Move left pointer to the right if it points to a non-alphanumeric character
    while (i < j && !isalnum(s[i])) i++;
    
    // Move right pointer to the left if it points to a non-alphanumeric character
    while (i < j && !isalnum(s[j])) j--;
    
    // If pointers have crossed, it's a palindrome
    if (i >= j) return true;
    
    // If the characters don't match, it's not a palindrome
    if (tolower(s[i]) != tolower(s[j])) return false;
    
    // Move both pointers closer and recurse
    return palindrome(i + 1, j - 1, s);
  }
    public:
  bool isPalindrome(string s){

bool t = palindrome(0,s.length()-1,s);
    return t;

}

};