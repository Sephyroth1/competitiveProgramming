#include <bits/stdc++.h>

//"D:/MSYS2/MINGW64/INCLUDE/C++/14.2.0/X86_64-W64-MINGW32/BITS/STDC++.H"

#define ll long long

using namespace std;

int main()
{
    ll t;
    ll n = 1, m = 1;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll l = max(x, y);
        ll l2 = (l - 1) * (l - 1);
        ll mid = l2 - (l - 1);
        n = abs(l - x), m = abs(l - y);
        if (l % 2 == 0)
        {
            if (y == l)
            {
                cout << l2 + x << "\n";
            }
            else
            {
                cout << l2 + 2 * l - y << "\n";
            }
        }
        else
        {
            if (x == l)
            {
                cout << l2 + y << "\n";
            }
            else
            {
                cout << l2 + 2 * l - x << "\n";
            }
        }
    }
    return 0;
}
