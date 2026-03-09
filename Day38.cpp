/*
Question : Sudoku problem
*/
#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int row , int col , int num){
    for (int i=0; i<9  ;i++)
        if(grid[row][i])          //for col
            return false;


    for (int j=0; j<9  ; j++)
        if(grid[col][j])           //for row
            return false;

    int startRow =row -row%3 ;
    int startCol =col -col%3 ;

    for (int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++)       //3x3 box check
            if (grid[i+startRow][j+startCol] == num)
                return false ;

     return true ;
    } 
}

