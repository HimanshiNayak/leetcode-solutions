class Solution {
    vector<vector<int>> res;
public:
void subset(vector<int>& nums , vector<int>&temp,vector<vector<int>>&res,int i){
    if(i>=nums.size()){
        res.push_back(temp);
        return;
    }
    temp.push_back(nums[i]); 
     subset(nums, temp, res,i + 1); 
     temp.pop_back(); 
      subset(nums, temp, res,i + 1);  

}
    vector<vector<int>> subsets(vector<int>& nums) {
        // res.clear(); // Initialize the result container
        if (nums.empty()) return res;
        vector<int> temp; // Temporary list to hold subsets
        subset(nums, temp, res,0);
        return res;
    }

    
};
    