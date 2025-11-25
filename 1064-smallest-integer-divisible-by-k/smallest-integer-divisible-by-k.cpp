class Solution {
public:
    int smallestRepunitDivByK(int k) {
        
    if (k % 2 == 0 || k % 5 == 0) 
        return -1;

    int n = 1 ; // this is like starting with n = 1
    int length = 1;

    while (true) {
        if (n % k == 0)
            return length;

        // your update: n = n * 10 + 1, but using modulo to avoid overflow
        n = (n * 10 + 1) % k;

        length++;

        // safety stop (not really needed but avoids infinite loops)
      
}
    }
};