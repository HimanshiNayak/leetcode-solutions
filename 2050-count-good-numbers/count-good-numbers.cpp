class Solution {
public:
    long long mod = 1000000007;

    long long countgood(long long base, long long exp) {
        if (exp == 0) return 1;
        long long half = countgood(base, exp / 2) % mod;
        if (exp % 2 == 0) {
            return (half * half) % mod;
        } else {
            return (base * ((half * half) % mod)) % mod;
        }
    }

    int countGoodNumbers(long long n) {
        long long grps = n / 2;
        long long res = countgood(20, grps);
        if (n % 2 != 0) res = (res * 5) % mod;
        return res;
    }
};
