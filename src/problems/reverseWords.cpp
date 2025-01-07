#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> res;
        string j = "", e = "";
        for (int i = 0; i <= s.size(); i++)
        {
            j += s[i];
            if (s[i] == ' ' || s[i] == '\0')
            {
                res.push_back(j);
                j = "";
            }
        }
        for (int i = res.size() - 1; i >= 0; i--)
        {
            e += res[i];
        }
        return e;
    }
};

int main()
{

    Solution s;
    string st;
    getline(cin, st);
    string res = s.reverseWords(st);
    cout << res << '\n';
    return 0;
}