/* Problem

 You are given a binary number as a string.
Convert it to its decimal (base-10) equivalent. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a binary number: ";
    cin >> s;

    int ans = 0;
    int power = 1;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ans += power;
        }
        power = power * 2;
    }

    cout << "Answer is :" << ans << endl;
    return 0;
}

/* if anyone want to share there opinion
 or want to suggest any optimised approach please do share in community.*/