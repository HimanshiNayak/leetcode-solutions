// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums){
//     unordered_map <int,int>mp;
//     for(int x:nums){
//         mp[x]++;
//     }
//     for(auto x:mp){
//         if(x.second==1)return x.first;
//     }
//     return -1;
//     }
// };

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = 0;
        for (int num : nums) {
            res ^= num;
        }
        return res;     
    }
};