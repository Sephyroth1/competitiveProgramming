#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[26] = {}, oddCount = 0;
    for (char i : s)
    {
        freq[i - 'A']++;
    }

    string half = "", middle = "", palindrome = "";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] & 1)
        {
            oddCount++;
            if (oddCount > 1)
            {
                cout << "NO SOLUTION" << "\n";
                return 0;
            }
            middle = string(1, 'A' + i);
        }
        half += string(freq[i] / 2, 'A' + i);
    }

    palindrome = half + middle;
    reverse(half.begin(), half.end());
    palindrome += half;
    cout << palindrome << "\n";
    return 0;
}