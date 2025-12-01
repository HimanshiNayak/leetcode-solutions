class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top =0 ;
        int bottom = matrix.size()-1;
          int left =0 ;
          int right =matrix[0].size()-1;
          int cnt=0;
        int total = matrix.size()*matrix[0].size();
         while(cnt<total){
    for(int i=left;cnt<total && i<=right;i++){
ans.push_back(matrix[top][i]);
cnt++;

    }
    top++;
    for(int i= top ; cnt<total && i<=bottom;i++ ){
        ans.push_back(matrix[i][right]);
        cnt++;
    }
    right--;
    for(int i= right;cnt<total & i>=left;i--){
        ans.push_back(matrix[bottom][i]);
        cnt++;
    }
    bottom--;
    for(int i=bottom;cnt<total && i>=top;i--){
        ans.push_back(matrix[i][left]);
        cnt++;
    }
    left ++;
         }
    return ans;
}
    
};