#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        ll num;
        set<ll> s;
        vector<ll> v(n, -1);
        for (ll i = 1; i <= n; i++)
        {
            s.insert(i);
        }

        for (auto &l : v)
        {
            cin >> num;
            if (s.count(num))
            {

                l = num;
                s.erase(num);
            }
        }

        for (auto &l : v)
        {
            if (l == -1)
            {
                l = *s.begin();
                s.erase(s.begin());
            }
        }
        for (auto &l : v)
            cout << l << " ";
        cout << "\n";
    }
}