#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll m;
    cin >> m;
    while (m--)
    {
        ll n;
        string ans = "YES";
        cin >> n;
        vector<ll> v(n);
        for (auto &e : v)
            cin >> e;

        ll ab = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ab = abs(v[i] - v[i + 1]);
            if (ab != 5 && ab != 7)
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}