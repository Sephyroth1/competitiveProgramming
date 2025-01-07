#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool checkBinary(ll i, string buf, ll n)
{
    if (i < 0)
        return false;
    if (i >= n - 3)
        return false;
    if (buf[i] == '1' && buf[i + 1] == '1' && buf[i + 2] == '0' && buf[i + 3] == '0')
        return true;
    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll q, i, v, cnt = 0, n = s.size();
        cin >> q;
        for (ll i = 0; i < n; i++)
            if (checkBinary(i, s, n))
                cnt++;
        while (q-- > 0)
        {
            cin >> i >> v;
            i--;
            if (s[i] != '0' + v)
            {
                bool before = checkBinary(i - 3, s, n) || checkBinary(i - 2, s, n) || checkBinary(i - 1, s, n) || checkBinary(i, s, n);
                s[i] = '0' + v;
                bool after = checkBinary(i - 3, s, n) || checkBinary(i - 2, s, n) || checkBinary(i - 1, s, n) || checkBinary(i, s, n);
                cnt += after - before;
            }
            cout << ((cnt > 0) ? "YES" : "NO") << "\n";
        }
    }
}