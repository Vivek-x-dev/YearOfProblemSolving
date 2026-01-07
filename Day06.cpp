/*
Question : print the maxSum of subarrays . {brute force approach} 
*/

#include<iostream>
#include<climits>
using namespace std;
 
int maxSubarraySum (int *arr , int n  ){
    int maxSum= INT_MIN ;
     
    for (int start=0 ; start<n ; start++ ){
        int currSum=0;
        for (int end = start ; end < n ; end++ ){
             currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }

    }
    return maxSum;
}
int main() {
    int arr[] = {2 , 5, -11, 4, -3 , 3, 6};
    int n = sizeof(arr) / sizeof(int);

    cout << "maxium SUM of subarrays is : " <<maxSubarraySum(arr, n)<<endl;
    
    return 0;
}

     

