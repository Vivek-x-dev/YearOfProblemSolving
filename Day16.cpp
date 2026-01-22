/*
Question : search an element in 2D matrix
Input:
11 23 65 17
10 11 16 20
23 30 34 60

key =11
*/
#include <iostream>
using namespace std;

void search(int arr[][4], int r, int c, int key) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == key) {
                cout << "Found at index (" << i << "," << j << ")";
                return;
            }
        }
    }
    cout << "Not Found";
}

int main() {
    int arr[3][4] = {
        {11, 23, 65, 17},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int key = 11;
    search(arr, 3, 4, key);

    return 0;
}
// Output: Found at index (0,0) 