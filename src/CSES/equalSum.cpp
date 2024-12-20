#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    vector<ll> v1, v2;
    ll s = sum / 2;
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        for (int i = n; i >= 1; i--)
        {
            if (s >= i)
            {
                v1.push_back(i);
                s -= i;
            }
            else
            {
                v2.push_back(i);
            }
        }
        int m = v1.size(), o = v2.size();
        cout << m << endl;
        for (auto i : v1)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << o << endl;
        for (auto j : v2)
        {
            cout << j << " ";
        }
        cout << endl;
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }
}

// 7
// 1 2 3 4 5 6 7
// 1 2 4 7 | 3 5 6
// 6
// NO
// 4
// 2 3 | 1 4
// 5
// 2 1 5 | 4 3