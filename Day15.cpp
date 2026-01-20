/*
Question : diagonal sum of matrix
Input:
1 2 3
4 5 6
7 8 9   
*/
#include <iostream>
using namespace std;    
int diagonalSum(int arr[][3], int row, int col) {
    int sum = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {                      //primary diagonal 
                sum += arr[i][j];
            }
            if (i + j == col - 1) {           //secondary diagonal 
                sum += arr[i][j];
            }
        }
    }

   
    if (row % 2 != 0 && col % 2 != 0) {
        sum -= arr[row / 2][col / 2];            //subtracting the repeated middle element
    }

    return sum;
}
int main() {
    int arr[3][3] = { {1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9} };      
    int result = diagonalSum(arr, 3, 3);
    cout << "Diagonal Sum: " << result << endl;
    return 0;
}
// Output: Diagonal Sum: 25