class Solution {
public:
//     bool isValid(int row, int col, vector<string>& board, int n) {
//         int j = col - 1;
//         while (j >= 0) {
//             if (board[row][j] == 'Q') return false;
//             j--;
//         }

//         int i = row, j1 = col;
//         while (i >= 0 && j1 >= 0) {
//             if (board[i][j1] == 'Q') return false;
//             i--;
//             j1--;
//         }

//         i = row;
//         j1 = col;
//         while (i < n && j1 >= 0) {
//             if (board[i][j1] == 'Q') return false;
//             i++;
//             j1--;
//         }

//         return true;
//     }

//     void backtrack(int col, int n, vector<string>& board, vector<vector<string>>& result) {
//         if (col == n) {
//             result.push_back(board);
//             return;
//         }
//         for (int row = 0; row < n; row++) {
//             if (isValid(row, col, board, n)) {
//                 board[row][col] = 'Q';
//                 backtrack(col + 1, n, board, result);
//                 board[row][col] = '.';
//             }
//         }
//     }

//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> res;
//         vector<string> board(n, string(n, '.'));
//         backtrack(0, n, board, res);
//         return res;
//     }
// };
bool issafe(int row,int col,vector<string>&board,int n,vector<vector<string>>&res){
    int duprow = row;
    int dupcol = col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q')return false;
        row--;
        col--;
    }
    row = duprow ;
    col = dupcol;
    while(col>=0){
         if(board[row][col]=='Q')return false;
        col--;
    }
     row = duprow ;
    col = dupcol;
    while(col>=0 && row<n){
         if(board[row][col]=='Q')return false;
        col--;
        row++;
    }
    return true;
}
void solve(int col , vector<string>&board , vector<vector<string>>&res,int n){
    if(col == n){
        res.push_back(board);
        return;
    }
    for(int row =0;row<n;row++){
        if(issafe(row,col,board,n,res)){
            board[row][col]='Q';
        solve(col+1,board,res,n);
        board[row][col]='.';
    }
}
}
  vector<vector<string>> solveNQueens(int n) {
     vector<vector<string>>res;
     vector<string>board(n,string(n,'.'));
     solve(0,board,res,n);
     return res;
    }
  };