/* 
Question

WAP to swap two numbers using pointers.
Explain why.

*/ 
#include <iostream>
using namespace std;

int main(){
 int a = 5, b = 10;
    int *ptr1 = &a;
    int *ptr2 = &b;
     cout << "Before swapping: " << endl;
     cout << "a = " << a << ", b = " << b << endl;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0; 

}