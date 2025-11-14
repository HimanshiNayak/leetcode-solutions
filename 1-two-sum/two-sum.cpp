class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           vector<int> result;
      // //see which to add up to make the target and then push it to another vector and return the vec
      for(int i=0;i<nums.size();i++){
        for(int j= i+1;j<nums.size();j++){
          if(nums[i]+nums[j]== target){
            result.push_back(i);
            result.push_back(j);
            return result;
          }
        }
      }
      return result;
    }
}; 