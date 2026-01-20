class Solution {
public:
  //when n is evene ret -1 as even and n+1 always gives odd and for the odd we , just change the first zero in n and return 
  
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> res;
        for (auto& n : nums) {
            if (n & 1) {
                auto z = ((n + 1) & ~n) >> 1;
                res.push_back(n & ~z);
            } else
                res.push_back(-1);
        }
        return res;
    
    }
};