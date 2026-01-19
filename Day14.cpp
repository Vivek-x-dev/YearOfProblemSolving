/*
Question : Spiral Matrix (Spiral Order Traversal)
Input:
1  2  3 
4  5  6 
7  8  9 

Output:
1 2 3 6 9 8 7 4 5
*/
#include <iostream>
using namespace std;
void spiralOrder(int arr[][3], int row, int col) {
    int top = 0, bottom = col-1, left = 0, right = row-1;

    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";               //downward print
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";         //reverse print
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}
int main() {
    int arr[3][3] = { {1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9} };  

    cout << "Spiral order Traversal: ";
    spiralOrder(arr, 3, 3);
    cout << endl;
    return 0;
}
// Output: 1 2 3 6 9 8 7 4 5
