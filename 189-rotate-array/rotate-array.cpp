class Solution {
public:
    // void rotate(vector<int>& nums, int k) {
        // // ek temp vec usmei last utte ele rkh do 
        // int n = nums.size();
        // vector<int>temp;
        // k = k%n;
        // for(int i = n-k ;i <n;i++){
        //     temp.push_back(nums[i]);
        // } 
        // for(int i=0;i<n-k;i++){
        //     temp.push_back(nums[i]);
        // }
        // nums = temp;

        // rev poori array , then rev k ele then n-k ele
        void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k); //not k-1 as iter wount inclde end wala
        reverse(nums.begin()+k, nums.end());
    }
};