#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, sum = 0;
        cin >> n >> k;
        vector<ll> brand_cost(k, 0);
        for (int i = 0; i < k; i++)
        {
            ll b, c;
            cin >> b >> c;
            brand_cost[b - 1] += c;
        }

        sort(brand_cost.rbegin(), brand_cost.rend());

        for (int i = 0; i < min(n, k); i++)
        {
            sum += brand_cost[i];
        }
        cout << sum << "\n";
    }
    return 0;
}