/*
Question : N-Queens Problem
*/
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {

    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;                        //for column check
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
        if (board[i][j] == 'Q')
            return false;                      //for left diagonal check
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')               
            return false;                     //for right diagonal check
    }

    return true;    
}

void solveNQueens(int row, vector<string>& board, vector<vector<string>>& ans, int n) {
    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {

            board[row][col] = 'Q';             //place queen

            solveNQueens(row + 1, board, ans, n);     //recur for next row

            board[row][col] = '.';              //backtrack and remove the queen
        }
    }
}

int main() {
    int n = 4;
    vector<string> board(n, string(n, '.'));

    vector<vector<string>> ans;
    solveNQueens(0, board, ans, n);
    cout << "Number of solutions: " << ans.size() << endl;
}
