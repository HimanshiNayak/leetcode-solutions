class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max1s = 0;
        int rowNo = 0;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;

            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    count++;
            }

            if (count > max1s) {
                max1s = count;
                rowNo = i;
            }
        }

        return {rowNo, max1s};
    }
};
