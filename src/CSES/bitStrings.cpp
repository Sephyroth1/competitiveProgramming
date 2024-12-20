#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll base = 2, mod = 1000000007;
    ll result = 1;
    while (n > 0)
    {
        if (n & 1)
            result = (result * base) % mod;
        n = n >> 1;
        base = (base * base) % mod;
    }
    cout << result << endl;
    return 0;
}