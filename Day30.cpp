/*
Question : recurssion power of a number with better time complexity than O(n)
*/

#include <iostream>

using namespace std;

int power (int x , int n){
    if (n==0) return 1;

    int temp = power(x , n/2);

    if (n%2==0)
        return temp*temp ;
    else
        return x*temp*temp ;
}
int main (){
    int x , n;
    cout << "Enter the Base number : ";
    cin >> x;
    cout << "Enter the power : ";
    cin >> n;

    cout << x << " raised to the power " << n << " is : " << power(x , n) << endl;

    return 0;
}