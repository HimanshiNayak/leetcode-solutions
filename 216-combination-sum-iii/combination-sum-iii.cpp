class Solution {
public:
vector<vector<int>>res;
void sum(int i , int k , int n , vector<int>&ans ){
    if(ans.size()==k){
        if(n==0)res.push_back(ans);
        return  ;
    }

if(i>9){
    return;
}
sum(i+1, k,n,ans);
ans.push_back(i);
sum(i+1,k,n-i,ans);
ans.pop_back();

}
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int>ans;
sum(1,k,n,ans);
return res;
        
    }
};
// f(idx , n , datastr){
//     if(ds.size ==k)if(n==0)ans.push_back(i);
//     return 
//     if(i>9)return ;
//     f(i+1, n , ds)ds.push_back(i) //take condition
//     f(i+1, n-i, ds)//not 
//     ds.pop_bacl
// }