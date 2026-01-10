/*
Question: Find the sum of array  
*/
#include<iostream>
using namespace std;

int main() {
    int arr[] ={2,3,-8,7,9};
    int sum=0 ;
    int n = sizeof(arr)/sizeof(int);

    for (int i= 0 ; i<n ; i++){
        sum += arr[i];
    }
  cout<<"sum of array is : "<< sum << endl;

}
