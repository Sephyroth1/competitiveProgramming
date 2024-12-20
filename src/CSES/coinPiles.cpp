#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << (((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a) ? "YES" : "NO") << "\n";
    }
    return 0;
}
