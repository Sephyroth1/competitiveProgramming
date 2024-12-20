#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll minDifference(vector<ll> arr, ll n, ll sumCalc, ll sumTotal)
{
    vector<bool> dp(sumTotal / 2 + 1, false);
    dp[0] = true;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = sumTotal / 2; j >= arr[i]; j--)
        {
            cout << j << " ";
            dp[j] = dp[j] || dp[j - arr[i]];
        }
    }
    cout << "\n";

    ll minDiff = sumTotal;
    for (ll i = sumTotal; i >= 0; i--)
    {
        if (dp[i])
        {
            minDiff = abs(sumTotal - 2 * i);
            break;
        }
    }

    return minDiff;
}

ll mind(vector<ll> arr, ll n, ll idx, ll sum1, ll sum2)
{
    if (idx == n)
    {
        return abs(sum1 - sum2);
    }

    ll opt1 = mind(arr, n, idx + 1, sum1 + arr[idx], sum2);
    ll opt2 = mind(arr, n, idx + 1, sum1, sum2 + arr[idx]);

    return min(opt1, opt2);
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> p(n);
    ll sum = 0;
    for (auto &x : p)
        cin >> x;
    // for (auto &x : p)
    //     sum += x;
    // ll minDiff = minDifference(p, (ll)p.size(), 0, sum);
    // cout << minDiff << "\n";
    ll minDiff = mind(p, n, 0, 0, 0);
    cout << minDiff << "\n";
    return 0;
}