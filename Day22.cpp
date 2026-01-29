/*
Question : check even or odd via bitwise operator
*/
#include <iostream>
using namespace std;

int main (){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num & 1){
        cout<<num<<" is odd number"<<endl;
    }
    else{
        cout<<num<<" is even number"<<endl;
    }

    return 0;
}

/*
I used bit wise  And (&) operator to check even or odd number.
 The least significant bit (LSB) of an odd number is always 1, 
while for an even number, it is 0. By performing a bitwise AND operation with 1. 

If the result is 1, the number is odd; if the result is 0, the number is even.
*/