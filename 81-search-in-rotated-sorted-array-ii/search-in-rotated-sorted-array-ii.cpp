class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target)return true;
        // }
        // return false;
unordered_map<int , int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(mp.find(target) != mp.end())return true;
        }
        return false;
    }
};