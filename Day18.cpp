/*
Question : check the wheather STRING is plindrome or not
*/
#include <iostream>
#include <string>
using namespace std;


#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0 , right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << word << " is a Palindrome";
    } else {
        cout << word <<" is not a Palindrome";
    }
    cout<<endl;
    return 0;
}
