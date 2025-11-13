class Solution {

public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if (n == 0) return result;

        int left = 0; // start pointer

        while (left < n) {
            int right = left;

            // move right pointer while numbers are consecutive
            while (right + 1 < n && nums[right + 1] == nums[right] + 1) {
                right++;
            }

            // form the range string
            if (left == right) {
                result.push_back(to_string(nums[left]));
            } else {
                result.push_back(to_string(nums[left]) + "->" + to_string(nums[right]));
            }

            // move to the next range
            left = right + 1;
        }

        return result;
    }
};

