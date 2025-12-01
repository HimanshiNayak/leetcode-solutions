class Solution {
public:

//when the ele are same then its not consq , 3 var one for lastele , count  and the longestlen

    int longestConsecutive(vector<int>& nums) {
//         int cnt =1;
//         int longest_len =1;
//         //if cons then cnt++ and update last ele, if not eqal and not cons thent count willbe 1 and last lele will be that ele
// sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]+1 == nums[i+1]){
//                 cnt++;
//             }
//             else if(nums[i]==nums[i+1]) continue;
//             else{
//             cnt =1;
//             }
//         longest_len = max(longest_len , cnt);
//             }    
//         return longest_len;



 int n = nums.size();

        // Return 0 if array is empty
        if (n == 0) return 0; 

        sort(nums.begin(), nums.end()); 

        // Track last smaller element
        int lastSmaller = INT_MIN; 
        // Count current sequence length
        int cnt = 0; 
        // Track longest sequence length
        int longest = 1; 

        for (int i = 0; i < n; i++) {
            // If consecutive number exists
            if (nums[i] - 1 == lastSmaller) {
                // Increment sequence count
                cnt += 1; 
                // Update last smaller element
                lastSmaller = nums[i]; 
            } 
            // If consecutive number doesn't exits
            else if (nums[i] != lastSmaller) {
                // Reset count for new sequence
                cnt = 1; 
                // Update last smaller element
                lastSmaller = nums[i]; 
            }
            // Update longest if needed
            longest = max(longest, cnt); 
        }
        return longest;
    }
};


