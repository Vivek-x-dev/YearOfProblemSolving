/*
Question : print a subarrays of arrays
[2,55,17,4,13,27,8,2] 

*/
#include <iostream>
using namespace std;

void printSubarrays (int arr[] , int n){

    for (int start=0 ; start < n ; start++){
        for(int end = start; end< n ; end++ ){
            for(int k = end; k<=end ; k++ ){
                cout<< arr[k]<<" ";

            }
        }
         cout<<" " <<endl;
    }
}

int main(){
    int arr[]={2,55,17,4,13,27,8,2 };
    int n=sizeof(arr)/sizeof(int);

    printSubarrays(arr , n);

    return 0;


}