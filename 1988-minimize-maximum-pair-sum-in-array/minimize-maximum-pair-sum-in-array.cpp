class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int s =0;
      int e = nums.size()-1;
      int maxi =0, sum=0;
      while(s<e){
        sum = nums[s]+nums[e];
        maxi = max(sum , maxi);
        s++;
        e--;
      }
      return maxi;
    }
};