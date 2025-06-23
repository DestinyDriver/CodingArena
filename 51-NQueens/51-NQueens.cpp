// Last updated: 24/6/2025, 12:45:29 am
class Solution {
    void tra(int row, int n, vector<vector<string>>& ans, vector<string>& board,
             vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2) {
        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (cols[col] || diag1[row - col + n - 1] || diag2[row + col]) continue;

            // Place queen
            board[row][col] = 'Q';
            cols[col] = diag1[row - col + n - 1] = diag2[row + col] = true;

            tra(row + 1, n, ans, board, cols, diag1, diag2);

            // Backtrack
            board[row][col] = '.';
            cols[col] = diag1[row - col + n - 1] = diag2[row + col] = false;
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        vector<bool> cols(n, false), diag1(2 * n - 1, false), diag2(2 * n - 1, false);
        tra(0, n, ans, board, cols, diag1, diag2);
        return ans;
    }
};
