class Solution {
public:
// The search will cover the column range from 0 to col-1, where col is the total number of columns.
// We choose a middle column and identify the row with the largest element in that column.
// We apply similar logic as in 1-D: if this element is bigger than both its side neighbors, we’ve found the peak.
// If the left neighbor is bigger, we only search the left part; if the right neighbor is bigger, we search the right part.

   int maxEle(vector<vector<int>>& mat , int col){
    int n = mat.size();
    int max_val = INT_MIN;
    int index = -1;

    for(int i=0; i<n;i++){
        if(mat[i][col]>max_val){
            max_val = mat[i][col];
            index = i;
        }
    }
    return index;
   }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l = 0;
        int h = m-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            int row = maxEle(mat , mid);
            int left = mid-1>=0?mat[row][mid-1]:INT_MIN;
            int right = mid+1 <m ?mat[row][mid+1]:INT_MIN;
            if(mat[row][mid]>left && mat[row][mid]>right ){
                return {row,mid};
            }
            else if(left >mat[row][mid])h = mid-1;
            else l = mid+1;
        }
        return {-1,-1};
    }
};