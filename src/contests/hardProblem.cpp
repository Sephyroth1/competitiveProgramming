#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
        ll row1 = min(a, m), row2 = min(b, m);
        ll minRow = 2 * m - row1 - row2;
        ll row3 = min(minRow, c);
        cout << row1 + row2 + row3 << "\n";
    }
}
