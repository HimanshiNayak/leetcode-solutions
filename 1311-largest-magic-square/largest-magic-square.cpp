class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 1;

        for (int size = 2; size <= min(n, m); size++) {
            for (int i = 0; i + size <= n; i++) {
                for (int j = 0; j + size <= m; j++) {

                    if (isMagic(grid, i, j, size)) {
                        ans = size;
                    }
                }
            }
        }
        return ans;
    }

    bool isMagic(vector<vector<int>>& grid, int r, int c, int k) {
        int target = 0;

        // first row sum
        for (int j = 0; j < k; j++)
            target += grid[r][c + j];

        // rows
        for (int i = 0; i < k; i++) {
            int sum = 0;
            for (int j = 0; j < k; j++)
                sum += grid[r + i][c + j];
            if (sum != target) return false;
        }

        // columns
        for (int j = 0; j < k; j++) {
            int sum = 0;
            for (int i = 0; i < k; i++)
                sum += grid[r + i][c + j];
            if (sum != target) return false;
        }

        // main diagonal
        int diag1 = 0;
        for (int i = 0; i < k; i++)
            diag1 += grid[r + i][c + i];

        // anti diagonal
        int diag2 = 0;
        for (int i = 0; i < k; i++)
            diag2 += grid[r + i][c + k - 1 - i];

        return diag1 == target && diag2 == target;
    }
};
