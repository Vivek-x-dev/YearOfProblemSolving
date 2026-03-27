/*
Question : zigzag problem

*/
#include <iostream>
using namespace std;
int main(){

    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row =3 , col =3;

    for (int i = 0 ; i< row ; i++){
        if ( i % 2 == 0 ){
            for (int j=0 ; j< 3 ; j++){
                cout <<arr[i][j] <<" ";
            }
        }

        else{
            for (int j=col-1 ; j<= 1 ; j--){
                cout <<arr[i][j] <<" ";
            }
        }
    } 
}
// i am taking break from this because i am seriously preparing for devops intern 
// i will continue this after getting intership ........