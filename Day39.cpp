/*
Question : non repeating character in a string without unordered map
*/
#include <iostream>
#include <string>
using namespace std;

char firstNonRepeatingCharacter(const string& str) {
    int charCount[256] = {0}; 
    for (char ch : str) {
        charCount[ch]++;
    }

   
    for (char ch : str) {
        if (charCount[ch] == 1) {
            return ch; 
        }
    }

    return '\0'; 
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char result = firstNonRepeatingCharacter(input);
    if (result != '\0') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}