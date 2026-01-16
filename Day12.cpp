/*
Question : find sorted array using count sort ?
[6,4,3,1,2,2,3,6,8,5,1,0,1,3,9,2,7]

*/
#include <iostream>
using namespace std;

void countSort(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)                    // maximum value
            maxVal = arr[i];
    }

    int count[maxVal + 1] = {0};

    
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;                       //  frequency
    }

    
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {                 //  array
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main(){
    int arr[]={6,4,3,1,2,2,3,6,8,5,1,0,1,3,9,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    countSort(arr , n);

    cout<<"sorted array is : " ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

