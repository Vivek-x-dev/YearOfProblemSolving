/*
Question : Given a vector and a target sum, check whether any pair adds up to the given sum.
brute force approach: O(n^2)
*/
#include<iostream>
#include<vector>
using namespace std;

void hasPairSum(const vector<int> &value ,int target){
    int n=value.size();
    for (int i=0; i <n ; i++){
        for (int j= i+1; j<n ; j++){

            if(value[i]+value[j]==target){
            cout<<"Pair found " << value[i] << ", " << value[j];
            return;
            }
        }
    }
    cout<<" Pair not found";
}

int main(){
    vector<int> v={2,3,4,5,6,7,8,1};
   // int target=11;
    hasPairSum(v , 11);
    cout<<endl;
}

/*
it's new for me i am applying vector first time in my
dsa problem i stuck for a while in double for loop 
first for i --->j runs i-1 times
then for i+1 --->j runs i times
then for i+2 --->j runs i-1 times
then for i+3 --->j runs i-2 times
and so on ........
finally total no of iterations = n(n-1)/2 = O(n^2)
*/