/*
Question 8: Find the maximum element in a 2D array
 arr[3][3] = {{1, 4, 7},{3, 9, 2},{6, 5, 8}};
*/
#include<iostream>
using namespace std;

int maxVal(int arr[][3] ,int n , int m){
    int max = arr[0][0];

    for (int i= 0; i<n ; i++){
        for (int j= 0 ; j<m ; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
         }
    }
    return max;
}
int main() {
  int arr[3][3] = {{1, 14, 7},{3, 19, 2},{6, 10, 8}};


   cout << "Maximum element: " << maxVal(arr , 3 , 3 ) << endl;
    
   return 0;

}