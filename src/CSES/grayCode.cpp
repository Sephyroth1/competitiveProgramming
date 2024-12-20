#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void generateBinaryStrings(ll n, vector<string> &l, string res)
{
    if (n == 0)
    {
        if (find(l.begin(), l.end(), res) == l.end())
        {
            l.pb(res);
        }
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            generateBinaryStrings(n - 1, l, "0" + res);
            generateBinaryStrings(n - 1, l, "1" + res);
        }
    }
}

int rearrangeStrings(ll n)
{
    return n ^ (n >> 1);
}

vector<string> grayCode(ll n)
{
    if (n == 0)
    {
        return {""};
    }

    vector<string> recAns = grayCode(n - 1);
    vector<string> mainAns;

    for (int i = 0; i < (int)recAns.size(); i++)
    {
        mainAns.pb("0" + recAns[i]);
    }

    for (int i = recAns.size() - 1; i >= 0; i--)
    {
        mainAns.pb("1" + recAns[i]);
    }

    return mainAns;
}

int main()
{
    ll n;
    cin >> n;
    vector<string> l = grayCode(n);
    for (auto i : l)
        cout << i << "\n";
    return 0;
}