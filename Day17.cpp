/*
Question : Staircase Search 
Input:
11 23 65 17
10 11 16 20
23 30 34 60

key =16
*/
#include <iostream>
using namespace std;

void staircaseSearch(int arr[][4], int r, int c, int key){
    int i=0 , j=c-1;
    while(i<r && j>=0){
        if (arr[i][j]==key){
            cout<<"Key Found at ("<<i<<","<<j <<')' ;
            return ;
           }
            else if(arr[i][j] > key)
            j--;
            else
            i++;
    }
    cout<< " Not found ";

}
int main() {
    int arr[3][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48}
    };

    int key = 27;
    staircaseSearch(arr, 3, 4, key);
    cout<<endl;
    return 0;
}
