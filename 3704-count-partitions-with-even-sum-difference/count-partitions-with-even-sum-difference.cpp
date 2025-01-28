class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0;
        for(int num:nums){
            total+=num;
        }
        int leftsum =0, count =0;
        for(int i=0;i<nums.size()-1;i++){ //no need 
            leftsum +=nums[i];
            int rightsum = total-leftsum;
            if((rightsum-leftsum)%2==0)count++;
        }
        return count;
    }
};