// class Solution {
// public:
//     int specialTriplets(vector<int>& nums) {
  
//     const long long MOD = 1'000'000'007;
//     int n = nums.size();
//     long long count = 0;

//     for (int i = 0; i < n - 2; i++) {
//         for (int j = i + 1; j < n - 1; j++) {
//             if (nums[i] == nums[j] * 2) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (nums[k] == nums[j] * 2) {
//                         count++;
//                         if (count >= MOD) count %= MOD; 
//                     }
//                 }
//             }
//         }
//     }

//     return count % MOD;

//     }
// };
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int mod = 1e9 + 7;
        unordered_map<int, int> suffix;
        unordered_map<int, int> prefix;
        for(auto x : nums) suffix[x] += 1;
        long long ans = 0;
        for(auto x : nums){
            suffix[x] -= 1;
            ans += (long long)prefix[2 * x] * suffix[2 * x];
            prefix[x] += 1;
        }
        return ans % mod;
    }
};