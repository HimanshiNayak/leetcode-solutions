class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n = nums.size();
        int i = 0, j = 0;

        while (i < n && j < n) {
            // Move i until it finds an odd number
            while (i < n && nums[i] % 2 == 0)
                i++;

            // Move j until it finds an even number
            while (j < n && nums[j] % 2 == 1)
                j++;

            // Swap when both are valid and j is ahead
            if (i < n && j < n && j > i) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            } else {
                j++;
            }
        }

        return nums;
    }
};