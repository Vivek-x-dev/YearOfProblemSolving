/*
Question : grid ways
*/
#include <iostream>
using namespace std;

int gridways(int r , int c , int m , int n){  //(source row, source column, destination row, destination column)
    if(r == m-1 && c == n-1) return 1; 
    if(r >= m || c >= n) return 0; 

   
    return gridways(r+1, c, m, n) + gridways(r, c+1, m, n);
}

int main() {
    int m = 3, n = 3;
    cout << "Number of ways to reach the destination: " << gridways(0, 0, m, n) << endl;
    
    return 0;
}