#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll trailingZeroes(ll n)
{
    if (n <= 1)
    {
        return 0;
    }
    ll count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }

    return count;
}

int main()
{
    ll n;
    cin >> n;
    cout << trailingZeroes(n) << "\n";
    return 0;
}