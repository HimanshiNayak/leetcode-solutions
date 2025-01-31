class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxidx=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxidx)return false;
            maxidx = max(maxidx, i+nums[i]);
            if(maxidx >=nums.size()-1)return true;
        }
        return true;
    }
};
//for each idx check the farthest we can go , if the idx we are on is > max , then return false , we cant reach last 
// update maxidx to max of maxidx and nums[i] se kidhr tk ja skte; 