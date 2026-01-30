
//Question : Given an integer n and an index i, clear the i-th bit of n.

#include<iostream>
using namespace std;

int clearIthBit(int n, int i) {
    int mask = ~(1 << i); 
    return n & mask;      
}
int main() {
    int n, i;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Enter the index of the bit to clear (0-based): ";
    cin >> i;

    int result = clearIthBit(n, i);
    cout << "Result after clearing the " << i << "-th bit of " << n << " is: " << result << endl;

    return 0;
}

/*
 bit mask for this question is  ~(1<<i)
 and NOT for prsevation of all bits except ith bit
that is little tricky although question is easy */