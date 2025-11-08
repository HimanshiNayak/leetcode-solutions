class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //     int index = 1;
    //     for (int i = 1; i < nums.size(); i++) {
    //         if (nums[i] != nums[i - 1]) {
    //             nums[index] = nums[i];
    //             index++;
    //         }
    //     }
    //     return index;
    // }
  set<int> unique_set(nums.begin(), nums.end());
        
        // 2. The count of unique elements is the size of the set.
        int k = unique_set.size();
        
        // 3. (CRITICAL STEP) Copy the unique elements back into the input vector 'nums'.
        // This modifies the 'nums' array in-place, satisfying the problem's requirement
        // for the unique elements to be in the first k positions.
        
        // Using vector's assign method for a clean copy:
        nums.assign(unique_set.begin(), unique_set.end());
        
        // If the original vector needs to keep its original length, you might 
        // use an iterator-based copy instead, but assign is cleaner for a full replacement.
        
        // The problem typically implies we only care about the first k elements,
        // so returning k is correct.
        return k;
    }

};