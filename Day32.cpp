/*
Question : Find subset 
*/
#include<iostream>
#include<vector>   
using namespace std;

void findSubsets(vector <int>& arr,vector <int>& temp ,int index){

    if(index==arr.size()){
        cout<<"{" ;
        for (int x : temp){
            cout << x << " ";
        }
        cout<<"}" << endl;
        return ;
    }

    temp.push_back(arr[index]);           
    findSubsets(arr , temp , index+1);         //include current element 

    temp.pop_back();
    findSubsets(arr , temp , index+1);         //exclude element
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> temp;

    findSubsets(arr, temp, 0);
    return 0;
}
