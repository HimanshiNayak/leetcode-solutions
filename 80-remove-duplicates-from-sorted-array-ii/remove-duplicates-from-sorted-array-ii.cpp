class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //first 2 jo v ho same hi rhnge so start from the 2 ele fir k-2 se compre krte rho , same then leave nhi toh kko i wale se change krdo


        int n = nums.size();
        if (n <= 2) return n;

        int k = 2;  // position to write

        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};


        // int n = nums.size();
        // if (n == 0) return 0;

        // int write = 1;
        // int count = 1;

        // for (int i = 1; i < n; i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         count++;
        //     } else {
        //         count = 1;
        //     }

        //     if (count <= 2) {
        //         nums[write] = nums[i];
        //         write++;
        //     }
        // }
        // return write;
    

