class Solution {
public:
    bool isValid(int row, int col, vector<vector<char>>& board, char digit) {
        //horizontal
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == digit) return false;
        }
        //vertical
        for (int j = 0; j < 9; j++) {
            if (board[j][col] == digit) return false;
        }
        //3*3 matrix
        int newrow = (row / 3) * 3;
        int newcol = (col / 3) * 3;
        for (int i = newrow; i < newrow + 3; i++) {
            for (int j = newcol; j < newcol + 3; j++) {
                if (board[i][j] == digit) return false;
            }
        }
        return true;
    }

    bool helper(vector<vector<char>>& board, int row, int col) {
        if (row == 9) return true;

        int nextrow = (col == 8) ? row + 1 : row;
        int nextcol = (col == 8) ? 0 : col + 1;

        if (board[row][col] != '.') {
            return helper(board, nextrow, nextcol);
        }

        for (char ch = '1'; ch <= '9'; ch++) {
            if (isValid(row, col, board, ch)) {
                board[row][col] = ch;
                if (helper(board, nextrow, nextcol)) return true;
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }
};
