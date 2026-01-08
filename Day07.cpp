/*
Question : print the sum of subarrays using Kadane’s Algorithm 
*/

#include<iostream>
#include<climits>
using namespace std;
 
int maxSubarraySum (int *arr , int n  ){
    int maxSum= INT_MIN ;
     int currSum=0;
    for (int i=0 ; i<n ; i++ ){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
         if (currSum < 0 )
         currSum =0;

    }
    return maxSum;
}
int main() {
    int arr[] = {5, 7, -11, 4, -3 , 3, 6};
    int n = sizeof(arr) / sizeof(int);

    cout << "maxium SUM of subarrays is : " <<maxSubarraySum(arr, n)<<endl;
    
    return 0;
}

// please let me know if there is any optimal solution other than this.

