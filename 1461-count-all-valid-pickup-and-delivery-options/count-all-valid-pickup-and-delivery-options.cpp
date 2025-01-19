class Solution {
public:
// int MOD = 100000007;
// long long nC2(long long n ){
//     return (((n)%MOD)*((n-1)%MOD)/2)%MOD; //cuz n(n-1)(n-2)!/ (2! *n-2!)
// }
//     int countOrders(int n) {
//        long long total =1;
//        long long remaining = 2*n;
//        for(int i=0;i<n;i++){
//         total= (total*nC2(remaining))%MOD;
//         remaining-=2;
//        }
//        return total;
//     }
// };


const int MOD = 1e9 + 7;
const long long MOD_INV_2 = 500000004; // Precomputed modular inverse of 2 under MOD

// Function to calculate xC2 under MOD
long long calculate_xC2(long long x) {
    return (((x % MOD) * ((x - 1) % MOD)) % MOD * MOD_INV_2) % MOD;
}

// Function to calculate the total number of valid arrangements
int countOrders(int n) {
    long long totalWays = 1; // Initialize total ways
    long long remainingPositions = 2 * n; // Start with 2n positions

    // Iterate for each pair
    for (int i = 0; i < n; i++) {
        totalWays = (totalWays * calculate_xC2(remainingPositions)) % MOD; // Multiply xC2 under MOD
        remainingPositions -= 2; // Reduce positions by 2
    }

    return totalWays; // Return the result
}
};

