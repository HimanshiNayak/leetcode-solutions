class Solution {
  private:    
    bool isPalindromicInBase(int n, int base){
      //usko jis base mei convert krna hai usko rem method is krke vec mei store krlo
      vector<int>digits;
      while(n>0){
        digits.push_back(n%base);
        n/=base;
        //now check palindrome
        int l =0;
        int r = digits.size()-1;
        while(l<r){
          if(digits[l]!=digits[r])return false;
          l++;
          r--;
        }
    
      }
       return true;
    }
public:
    bool isStrictlyPalindromic(int n) {
//         return false ; //as never possible mathematecally
      
      //ab 2 se leke n-2 ke liye chla do loop aue check krlo
      for(int base=2;base<=n-2;base++){
        if(!isPalindromicInBase(n,base)){
          return false;
        }
      }
      return true;
      
    }
};