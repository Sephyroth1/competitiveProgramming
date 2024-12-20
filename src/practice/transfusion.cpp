#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll odd = 0, even = 0, n;
        cin >> n;
        vi p(n);
        for (int &x : p)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                odd += p[i];
            else
                even += p[i];
        }
        ll oddEl = n / 2, evenEl = n / 2;

        if (n & 1)
            evenEl++;
        if (odd % oddEl != 0 || even % evenEl != 0 || odd / oddEl != even / evenEl != 0)
        {
            cout << "NO" << "\n";
            continue;
        }
        cout << "YES" << "\n";
    }
    return 0;
}