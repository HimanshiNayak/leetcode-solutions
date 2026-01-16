class Solution {
public:
void findcom(int i , int target, vector<int>& candidates , vector<vector<int>>& ans , vector<int>& res){
    if(i==candidates.size()){
        if(target==0){
            ans.push_back(res);
    }
    return ;
    }
    if(candidates[i]<=target){
        res.push_back(candidates[i]);
    
    findcom(i , target-candidates[i],candidates,ans, res);
    res.pop_back();
    }
       findcom(i+1 , target,candidates,ans, res);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
findcom(0,target,candidates, ans, res);
return ans;
    }
};