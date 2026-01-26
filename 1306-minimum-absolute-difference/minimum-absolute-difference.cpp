class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mindiff = INT_MAX;
        vector<vector<int>>res;
        for(int i=1;i<arr.size();i++){
            int diff = arr[i]-arr[i-1];
            if(diff<mindiff){
                mindiff = diff;       
                res={};
                res.push_back({arr[i-1],arr[i]});
            }
            else if(diff ==mindiff){
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }
};