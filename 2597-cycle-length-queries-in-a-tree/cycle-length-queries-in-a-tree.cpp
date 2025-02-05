class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
        int m = queries.size();
        vector<int>result (m);
        for(int i=0;i<m;i++){
            result[i]++;
            int x= queries[i][0], y = queries[i][1];
            while(x!=y){
                if(x>y)x/=2;
                else y/=2;
                result[i]++;
            }
        }
        return result;
    }
};
    