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

        if (n <= 9)
            cout << n << "\n";

        ll tenNum = n - (n % 10) + 3;
        ll value = 0;
        for (ll i = tenNum; i <= n; i += 2)
        {
            value++;
        }

        cout << value << "\n";
    }
}