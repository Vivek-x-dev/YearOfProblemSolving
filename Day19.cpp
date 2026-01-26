/*
Question : check the whether STRING is an anagram or not

*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void toLowerCase(string &str) {
    for (char &ch : str) {                     // to remove case sensitivity
        ch = tolower(ch);               
    }
}   

bool areAnagrams(string str1, string str2) {
    toLowerCase(str1);
    toLowerCase(str2);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << str1 << " and " << str2 << " are Anagrams";
    } else {
        cout << str1 << " and " << str2 << " are not Anagrams";
    }
    cout << endl;
    return 0;
}   

/* problem is breakdown in three sections 
1. toLowerCase function to convert all characters to lowercase
2. areAnagrams function to check if two strings are anagrams(rearrange of characters then comparrison after sorting)
3. main function to take input and display result */