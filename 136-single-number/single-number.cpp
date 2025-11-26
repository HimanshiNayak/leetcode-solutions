class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int xorr = 0;
        // for(int i=0;i<nums.size();i++){
        //     xorr = xorr^nums[i];
        // }
        // return xorr;
map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1) return nums[i];
        }
        return -1;
    }
};