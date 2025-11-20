class Solution {
public:
    int reverse(int x) {
        long revnum = 0;
        while(x!=0){
            revnum = revnum*10 + x%10;
            x = x/10;
        }
        if(revnum>INT_MAX || revnum<=INT_MIN){
            return 0;
        }
        return revnum;
        
    }
};
// log10(x)