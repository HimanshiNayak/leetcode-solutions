class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        // vector<int>v(nums.size());
        // int index=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         v[index]=nums[i];
        //         index++;
        //     }
        // }
        // nums= v;
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};