#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll kn = 1, ans = 0;
        while (kn <= r2 / l1)
        {
            ll minimum = max(l1, (l2 + kn - 1) / kn);
            ll maximum = min(r1, r2 / kn);
            if (minimum <= maximum)
            {
                ans += maximum - minimum + 1;
            }
            kn *= k;
        }
        cout << ans << "\n";
    }
    return 0;
}