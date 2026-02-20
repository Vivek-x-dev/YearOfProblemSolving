/*
question : find permuutation for numbers
*/
#include <bits/stdc++.h>
using namespace std;

void permutation (vector<int> arr , int index ){
    if (index == arr.size()){
        for (int x : arr){
            cout << x << " ";
        }
        cout << endl;
        return ;
    }
    for (int i = index ; i< arr.size(); i++){
        swap(arr[index] , arr[i]);
        permutation(arr , index+1);
        swap(arr[index] , arr[i]);
    }
}
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
    vector<int> arr = {3,6,9,12};
    permutation(arr , 0);
    cout << "Total permutation : " << factorial(arr.size()) << endl;
    return 0;
}

/* it takes O(n*n!) time complexity because we are generating n! permutations
 and for each permutation we are printing n elements.*/