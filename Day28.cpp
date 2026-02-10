/*
question : typical resusion problems
1. factorial 
2. fiboonacci
*/
#include<iostream>
using namespace std;

int fact (int n){
    if (n==0) return 1;

    return n*fact(n-1);

}

int fiboo(int n){
    if (n==0 || n==1) return 1;

    return (fiboo(n-1)+fiboo(n-2) );
}

int main (){
    
  
    int n;
    cout<< "Enter a no. : ";
    cin>>n;
        
    cout<<"factorial of "<<n<< " is : " <<fact(n) << endl;
   
     cout<<"sum of fiboonacii series till  "<<n<< " is : " <<fiboo(n) << endl;
    
     return 0;
}

