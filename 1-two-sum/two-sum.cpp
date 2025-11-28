class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           vector<int> result;
      // //see which to add up to make the target and then push it to another vector and return the vec
    //   for(int i=0;i<nums.size();i++){
    //     for(int j= i+1;j<nums.size();j++){
    //       if(nums[i]+nums[j]== target){
    //         result.push_back(i);
    //         result.push_back(j);
    //         return result;
    //       }
    //     }
    //   }
    //   return result;
    // }


//ek vec mei values aur index save krlo as paisrs ..fir sort krlo aur two pointer chlao
    vector<pair<int ,int>>ans;
    vector<int>res;
    int n= nums.size();
    for(int i=0;i<n;i++){
        ans.push_back({nums[i],i});
    }
    sort(ans.begin(),ans.end());
    int i=0;
    int j = n-1;
   while(i<j){
    int sum = ans[i].first+ans[j].first;
    if(sum == target){
        res.push_back(ans[i].second);
        res.push_back(ans[j].second);
        break;
    }
    else if (sum >target)j--;
    else i++;
   }
   return res;
   }

}; 