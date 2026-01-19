class Solution {
public:
    string triangleType(vector<int>& nums) {
        string str;
              if (nums[0]+nums[1] <= nums[2]||nums[0] +nums[2]<= nums[1] || nums[1] + nums[2] <= nums[0] ) str = "none";
       else if(nums[0]==nums[1]&& nums[1]==nums[2])str= "equilateral";
        else if(nums[0]==nums[1]  || nums[1]==nums[2]|| nums[0]==nums[2]) str= "isosceles";
        else str="scalene";
        return str;
    }
};