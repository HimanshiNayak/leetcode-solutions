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
//   set<int> unique_set(nums.begin(), nums.end());
        
//         int k = unique_set.size();
//         nums.assign(unique_set.begin(), unique_set.end());

//         return k;
//     }

int i ,j=0; // i (write), j (read)
while(j<nums.size()){
    if(nums[i]!=nums[j]){ // If duplicate:
        i++;           // Move write pointer
        nums[i]=nums[j]; // Write element

        }        // Move read pointer           // If unique:// Write element
        j++;
    }
return i+1;
}

};