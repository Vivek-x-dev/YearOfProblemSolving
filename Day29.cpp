/*
Question : merge sort
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge (vector<int> right , vector<int> left ){

    int i = 0 , j = 0;
    vector <int> result ;

    while( i <= left.size() && j <= right.size() ){
        if (left[i]<right[j])
         result.push_back(left[i++]);
        else
            result.push_back(right[j++]);
    }

    while (i < left.size()){
        result.push_back(left[i++]);    //for remaining elements
    }
     while (j < right.size()){
        result.push_back(right[j++]);
    }

    return result;

}

vector<int> mergeSort(const vector <int>& v){
    if (v.size()<=1)
        return v;

    int mid = v.size()/2;

    vector <int> left (v.begin(), v.begin() +mid);
     vector <int> right (v.begin()+ mid , v.end() );

     left = mergeSort(left);
      right = mergeSort(right);

      return merge (left , right );

}

int main (){

    vector <int> v = {5,2,1,3,6,9,10};
    vector <int> sorted =mergeSort(v);
 
    for (int x : sorted )
    cout << x << " ";
}

