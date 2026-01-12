/*
Question : sort an array using bubble sort.
*/
#include<iostream>
using namespace std;

void bubblesort(int *arr ,int n){

      for (int i = 0 ; i<n ; i++){
         bool swapped = false;        // for optimization in case of sorted O(n) time complexity

         for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

int main(){
    int arr[] = {1,7,3,15,2,4,12,11,9};
     int n =sizeof(arr)/sizeof(arr[0]);

     bubblesort(arr , n);

   cout<<"sorted array is : " ;
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
        cout <<endl;
        return 0;
}