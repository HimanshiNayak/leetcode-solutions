class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(2*n);
        int i =0;
        while(i<n){
int j = i+n;
ans[i]= nums[i];
ans[j]= nums[i];
i++;
        }
        return ans;
    }
};