#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll numWays(ll n)
{
    ll total = n * n * (n * n - 1) / 2;
    ll attack = 4 * (n - 1) * (n - 2);
    return total - attack;
}

int main()
{
    ll t, n = 1;
    cin >> t;
    while (n <= t)
    {
        ll u = numWays(n);
        cout << u << endl;
        n++;
    }
    return 0;
}