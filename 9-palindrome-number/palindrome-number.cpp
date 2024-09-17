class Solution {
public:
    bool isPalindrome(int x) {
       
      if( x<0)return false;
      else{
        long r ;
      long t =x;
      while(t){
        r = r*10 + t%10;
        t = t/10;
      }
        if(r==x){
          return true;
        }
        return false;
      }
    }
};