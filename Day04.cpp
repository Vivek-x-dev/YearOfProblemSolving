/*
 Question: on binary search.

Given a sorted array of integers and a key value,
return the index of the key if found. Otherwise, return -1.
*/
#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{

    int start = 0, end = n - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
              end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 16;

    cout << binarySearch(arr, n, key) << endl; // Output: 4
    return 0;
}

