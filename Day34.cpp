/*
Question : Problem Statement

You are given N boxes in a straight line (1D array).
Place N queens such that no two queens overlap.

(There is no attack logic yet — just placement.)
*/
#include <iostream>
using namespace std;

void placeQueens(int idx, int n, int placed, string ans) {
    if (idx == n) {
        if (placed == n)
            cout << ans << endl;      
        return;
    }

 
    placeQueens(idx + 1, n, placed + 1, ans + "Q ");     // place queen
    placeQueens(idx + 1, n, placed, ans + ". ");     // don't place queen
}

int main() {
    int n = 3;
    placeQueens(0, n, 0, "");        // idx , n , placed , ans 
}