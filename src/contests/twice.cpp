#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define uo unordered_map<int, int>

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        vi p(n);
        uo m;
        ll c = 0;
        for (auto &x : p)
            cin >> x;
        for (auto &x : p)
            m[x]++;
        for (auto &x : m)
            if (x.second > 1)
                c += (x.second / 2);
        cout << c << "\n";
    }
    return 0;
}