class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxi = max(maxi, c);
                c=0;
            }
            else{
                c++;
            }
        }
        return max(maxi,c);
    }
};