class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
          for (int j = 0; j < k; j++) {
            // Find the index of the first occurrence of the minimum value in nums
            int minIndex = 0;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[minIndex]) {
                    minIndex = i;
                }
            }
            // Replace the minimum value with its value multiplied by the multiplier
            nums[minIndex] *= multiplier;
        }
        return nums;
    }
};