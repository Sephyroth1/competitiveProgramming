#include <bits/stdc++.h>

using namespace std;

/*hello => holle
  hello world => hollo werld
  IceCreAm => AceCreIm

  1. [e, o] => [o, e]
  2. [e, o, o] => [o, o, e]
  3. [I, e, e, A] => [A, e, e, I]*/

class Solution
{
public:
    string reverseVowels(string s)
    {
        string vowels = "aeiouAEIOU";
        vector<char> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (vowels.find(s[i]) != string::npos)
            {
                v.push_back(s[i]);
            }
        }
        int j = v.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (vowels.find(s[i]) != string::npos && j >= 0)
            {
                s[i] = v[j];
                j--;
            }
        }
        return s;
    }
};

int main()
{
    Solution s;
    string st;
    cin >> st;
    string res = s.reverseVowels(st);
    cout << res << "\n";
}