#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, q;
    string ans;
    cin >> n >> m >> q;
    vector<ll> a(n), b(m);
    for (auto &l : a)
        cin >> l;
    for (auto &e : b)
        cin >> e;
    ll num = 0;
    ll sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++)
        sumA += a[i];
    for (int i = 0; i < m; i++)
        sumB += b[i];

    unordered_map<ll, ll> mapB;
    while (q--)
    {
        ans = "NO";
        cin >> num;
        for (int i = 0; i < m; i++)
        {
            ll valueB = sumB - b[i];
            mapB[valueB]++;
        }

        for (int i = 0; i < n; i++)
        {
            ll valueA = sumA - a[i];
            if (valueA != 0 && num % valueA == 0)
            {
                ll requiredB = (num / valueA);
                if (mapB.find(requiredB) != mapB.end())
                {
                    ans = "YES";
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
}
