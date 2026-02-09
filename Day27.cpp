/*
Question :  You are given a 2 x n and 2 x 1 tiles.

Find the no. of ways to tilenthe floor completely.

T.C = O(2^n)  later we solve this problem with DP 

*/
#include<iostream>
using namespace std;

int tillingWays(int n){
    if (n==1 || n==0)
    return 1;

    return tillingWays( n-1 ) + tillingWays( n-2 );
}
int main (){
    int n;
    cout<< "enter the no. to find ways: ";
    cin>>n;

    cout <<"no of ways :"<<tillingWays(n);
    cout<<endl;
}
// (n-1)  ----> for vertical
// (n-2)  -----> horizontal