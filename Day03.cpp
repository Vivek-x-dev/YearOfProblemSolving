/*
Question : Finding maximun key value in array using linear search 
*/
#include<iostream>
using  namespace std ;

int FindMax (int *arr ,int n )
 {
    int max = arr[0];
    for (int i =0 ; i<n ; i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }
    return max; 
 };
 int main()
 {
    int arr[]={2,3,5,12,56,23};
    int n = sizeof(arr)/sizeof(int);
     
    cout << "maxium key value in array is :" << FindMax(arr ,n );
    cout<<endl;
    return 0;

 }


