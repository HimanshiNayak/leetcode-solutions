class Solution {
public:
    char kthCharacter(int k) {
    //kth character look at binary represenation
    int inc = 0;
    k--;
    while(k){
        inc += k&1;
        k >>= 1;
    }
    return (inc%26) + 'a';
    }
    
};