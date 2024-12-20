#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

void towerOfHanoi(ll n, ll current, ll auxiliary, ll goal, vector<vector<ll>> &l)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        towerOfHanoi(n - 1, current, goal, auxiliary, l);
        l.pb({current, goal});
        towerOfHanoi(n - 1, auxiliary, current, goal, l);
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<vector<ll>> l;
    towerOfHanoi(n, 1, 2, 3, l);
    cout << l.size() << "\n";
    for (auto i : l)
        cout << i[0] << " " << i[1] << "\n";
    return 0;
}