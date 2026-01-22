/*
Question : search an element in 2D matrix
Input:
11 23 65 17
10 11 16 20
23 30 34 60

key =16
*/
#include <iostream>
using namespace std;

void search(int arr[][4], int r, int c, int key) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if (arr[i][j] == key) {
                cout << "Key Found at index (" << i << "," << j << ")";
                return;
            }
        }
    }
    cout << "Key Not Found";
}

int main() {
    int arr[3][4] = {
        {11, 23, 65, 17},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int key = 16;
    search(arr, 3, 4, key);
    cout<<endl;
    return 0;
}
// Output: Key Found at index (1,2)