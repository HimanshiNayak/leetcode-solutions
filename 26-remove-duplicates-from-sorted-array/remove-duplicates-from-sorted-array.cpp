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

//two pointer
int i=0;
for(int j=1;j<nums.size();j++){
    if(nums[i]!=nums[j]){
        i++;
        nums[i]= nums[j];
    }
}
return i+1;
    }
};