/*
question : check the number is power of two or not
*/
#include <iostream>
using namespace std;  

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false; 
    }
    return (n & (n - 1)) == 0; 
}

int main() {
 int n;
 cout << "Enter an integer: ";
 cin >> n;

    if (isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}

/*
1 & 0 = 0
0 & 1 = 0
1 & 1 = 1
0 & 0 = 0  
 thats all logic behind this question
 n & (n-1) will be zero only when n is power of two
 because power of two has only one set bit
 e.g 4 = 100
     3 = 011
     ---------
     &   000
*/